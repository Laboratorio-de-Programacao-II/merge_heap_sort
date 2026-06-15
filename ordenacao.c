#include <string.h>
#include "ordenacao.h"

void merge(int *v, int inicio, int meio, int fim) {
    /* IMPLEMENTAR:
     * Combine v[inicio..meio] e v[meio+1..fim] (ambos ordenados)
     * de volta em v[inicio..fim].
     * Dica: copie cada lado para vetores auxiliares e intercale. */
}

void merge_sort_rec(int *v, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        merge_sort_rec(v, inicio, meio);
        merge_sort_rec(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

void merge_sort(int *v, int n){
    merge_sort_rec(v, 0, n-1);
}

static void heapify(int *heap, int sz, int i) {
    while (1) {
        int menor = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < sz && heap[l] < heap[menor]) menor = l;
        if (r < sz && heap[r] < heap[menor]) menor = r;
        if (menor == i) break;
        int tmp = heap[i]; heap[i] = heap[menor]; heap[menor] = tmp;
        i = menor;
    }
}

void inserir_heap(int *heap, int *sz, int valor) {
    heap[*sz] = valor;
    int i = *sz;
    (*sz)++;
    while (i > 0 && heap[i] < heap[(i - 1) / 2]) {
        int tmp = heap[i]; heap[i] = heap[(i-1)/2]; heap[(i-1)/2] = tmp;
        i = (i - 1) / 2;
    }
}

int retirar_heap(int *heap, int *sz) {
    int min = heap[0];
    heap[0] = heap[--(*sz)];
    heapify(heap, *sz, 0);
    return min;
}

void heap_sort(int *v, int n) {
    /* IMPLEMENTAR usando inserir_heap e retirar_heap */
}
