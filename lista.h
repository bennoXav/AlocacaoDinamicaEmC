#ifndef LISTA_H
#define LISTA_H

typedef struct TNode {
    int data;
    struct TNode* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int size;
} List;

void init(List* list);
void add(List* list, int data);
int insert(List* list, int pos, int data);
int delete(List* list, int pos);
int find(List* list, int val); // retorna 1 se achar
void print(List* list);
void clear(List* list);

#endif

