#include "lista.h"

#include <stdio.h>
#include <stdlib.h>

// Inicializa a lista
void init(List *list)
{
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

// Adiciona um numero no final
void add(List *list, int data)
{
    Node *n = malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    if (list->size != 0)
        list->tail->next = n;
    else
        list->head = n;
    list->tail = n;
    list->size++;
}

// Adiciona um numero no meio da lista
int insert(List *list, int pos, int data)
{     
    Node* aux = list->head;
    Node *novo = malloc(sizeof(Node));
    novo->data = data;
    if(pos>=0 && pos<=list->size){
      if(pos == 0){
        novo->next = aux;
        list->head = novo;
        list->size++;
        return 1;
      }

      int cont =1;
      Node *aux2 = 0;
      while(cont<list->size){

        if(cont == pos){

          aux2 = aux->next;
          aux->next = novo;
          novo->next = aux2;
          list->size++;
          return 1;

        }

        aux = aux->next;
        cont++;
      }

        aux = list->tail;
        aux->next = novo;
        list->tail = novo;
        list->size++;
        return 1;
      
    }
    return 0;
}

// Deleta um numero do inicio, meio ou fim da lista
int delete (List *list, int pos)
{
    Node* aux = list->head;
    if(pos==0){
      list->head = aux->next;
      list->size--;
      return 1;
    }
    int cont =1;
    Node* aux3 = aux;
    aux = aux->next;
    Node* aux2 = aux->next;
  
  while(cont<list->size-1){
    if(cont==pos){
      aux3->next = aux2;
      list->size--;
      return 1;
    }
    
    cont++;
    aux3 = aux;
    aux = aux->next;
    aux2 = aux->next;

  }
  if(pos == list->size-1){
      list->tail = aux3;
      aux3->next = NULL;
      list->size--;
      return 1;
  }
  return 0;
}
// Procura um número na lista, se encontrar retorna 1
int find(List *list, int val)
{

    Node* aux = list->head;
    while(aux != NULL){
      if(aux->data ==val){
        return 1;
      }
      aux=aux->next;
    }
    return 0;
}

// Exibe a lista na tela
void print(List *list)
{
    Node *ptr = list->head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Libera a memória ocupada pela lista
void clear(List *list)
{
    Node *ptr = list->head;
    while (ptr != NULL)
    {
        Node *aux = ptr;
        ptr = ptr->next;
        free(aux);
    }
    list->head = list->tail = NULL;
    list->size = 0;
}
