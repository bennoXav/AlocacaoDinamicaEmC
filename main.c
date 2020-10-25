#include "lista.h"

#include <stdio.h>

int main()
{
    List lista;
    init(&lista);
    add(&lista, 1);
    add(&lista, 2);
    add(&lista, 3);
    add(&lista, 4);
    add(&lista, 5);
    add(&lista, 6);
    add(&lista, 7);
    add(&lista, 8);
    add(&lista, 9);
    print(&lista);
    printf("adicionou 10 no index 0? ¬ %d\n",insert(&lista, 0, 10));
    printf("adicionou 11 no index 5? ¬  %d\n",insert(&lista, 5, 11));
    printf("adicionou 12 no index 11? ¬  %d\n",insert(&lista, 11, 12));
    print(&lista);
    printf("Elemento 2 existe na lista? %d\n", find(&lista, 2));
    printf("Elemento 30 existe na lista? %d\n", find(&lista, 30));
    add(&lista, 30);
    print(&lista);
    printf("Elemento 30 existe na lista? %d\n", find(&lista, 30));
    printf("remover elemento no index 0(10) ¬ %d\n", delete(&lista, 0));
    print(&lista);
    printf("remover elemento no index 5(11) ¬ %d\n", delete(&lista, 5));
    print(&lista);
    printf("remover elemento no index 10(30) ¬ %d\n", delete(&lista, 10));
    print(&lista);
    printf("remover elemento no index 10(index inválido) ¬ %d\n", delete(&lista, 10));
    clear(&lista);
}
