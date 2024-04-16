#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int N;
int bucket_idx;
char t_name[6];
char order[6];

struct bucket* hash_table;

struct bucket {
    int count;
    struct node* head;
};

struct node {
    char value[6];
    struct node* next; // 포인터 지정
};

struct node* create_node (char name[]) {
    struct node* new_node;
    // 메모리 할당
    new_node = (struct node *)malloc(sizeof(struct node));
    strcpy(new_node->value, name);
    new_node->next = NULL;
    return new_node;
};

int hash_idx (char name[]) {
    int bucket_idx;
    bucket_idx = name[0];
    bucket_idx = 150 - bucket_idx;
    //printf("%d", bucket);
    return bucket_idx;
};

void add (char name[]){
    int t_idx;
    t_idx = hash_idx(name);
    struct node* t_node;
    t_node = create_node(name);

    if (hash_table[t_idx].count == 0) {
        hash_table[t_idx].count += 1;
        hash_table[t_idx].head = t_node;
    } 
    else {
        struct node* p_node;
        struct node* b_node;
        p_node = hash_table[t_idx].head;
        if (strcmp(t_node->value, hash_table[t_idx].head->value) > 0) {
            hash_table[t_idx].head = t_node;
            t_node->next = p_node;
        } 
        else {
            while (strcmp(t_node->value, p_node->value) < 0) {
                b_node = p_node;
                p_node = p_node->next;
                if (p_node == NULL) {
                    break;
                }
            }
            b_node->next = t_node;
            t_node->next = p_node;
        }
        hash_table[t_idx].count += 1; 
    }
};

void remove (char name[]) {
    int t_idx;
    t_idx = hash_idx(name);

    struct node* p_node;
    struct node* b_node;
    struct node* t_node;

    p_node = hash_table[t_idx].head;

    while (p_node != NULL) {
        if (strcmp(hash_table[t_idx].head->value, name)==0) {
            hash_table[t_idx].head = p_node->next;
            hash_table[t_idx].count -= 1;
            break;
        } 
        else if (strcmp(p_node->value, name) ==0) {
            b_node->next = p_node->next;
            hash_table[t_idx].count -= 1;
        }
        free(p_node);
        b_node = p_node;
        p_node = p_node->next;
    }
}


int main(void) {
    // 해시테이블 메모리 할당
    hash_table = (struct bucket *)malloc(100 * sizeof(struct bucket));

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%s %s", t_name, order);
        if (strcmp(order, "enter") == 0) {
            add(t_name);
        } 
        else if (strcmp(order, "leave") == 0) {
            remove(t_name);
        }
    }
    for (int i=0; i<100; i++) {
        if (hash_table[i].count!=0) {
            int cnt;
            struct node* t_node;
            cnt = hash_table[i].count;
            t_node = hash_table[i].head;
            for (int j=0;j<cnt;j++) {
                printf("%s\n", t_node->value);
                t_node = t_node->next;
            }
        }
    }
}

