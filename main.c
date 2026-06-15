#include <stdio.h>
#include <string.h>
#include "ordenacao.h"

/* Verifica se o vetor está ordenado em ordem crescente */
int esta_ordenado(int *v, int n) {
    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i + 1]) return 0;
    return 1;
}


int main() {
    int original[100000];
    int v[100000];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &original[i]);

    /* Testa Heap Sort */
    memcpy(v, original, n * sizeof(int));
    heap_sort(v, n);
    printf("Heap Sort : %s\n", esta_ordenado(v, n) ? "OK" : "FALHOU");

    /* Testa Merge Sort */
    memcpy(v, original, n * sizeof(int));
    merge_sort(v, n);
    printf("Merge Sort : %s\n", esta_ordenado(v, n) ? "OK" : "FALHOU");

    return 0;
}
