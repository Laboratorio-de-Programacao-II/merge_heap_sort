#ifndef ORDENACAO_H
#define ORDENACAO_H

void merge(int *v, int inicio, int meio, int fim);
void merge_sort(int *v, int n);

void inserir_heap(int *heap, int *sz, int valor);
int retirar_heap(int *heap, int *sz);
void heap_sort(int *v, int n);

#endif
