O repositório contém a estrutura base de um exercício sobre **algoritmos de ordenação** em C:

- `ordenacao.h`: declaração das funções
- `ordenacao.c`: implementações das funções com algumas que você deverá implementar
- `main.c`: programa principal (já implementado)

## Sua tarefa

Implemente as duas funções marcadas com `/* IMPLEMENTAR */` em `ordenacao.c`.

### 1. Merge Sort

```c
void merge(int *v, int inicio, int meio, int fim);
```

Combina os sub-vetores `v[inicio..meio]` e `v[meio+1..fim]` (ambos já ordenados) de volta em `v[inicio..fim]`. A recursão em `merge_sort` já está pronta.

```
Exemplo: v = [1, 3, 5, 2, 4, 6]  (inicio=0, meio=2, fim=5)

esquerda: [1, 3, 5]
direita:  [2, 4, 6]

A intercalação resulta em  [1, 2, 3, 4, 5, 6]
```

### 2. Heap Sort

```c
void heap_sort(int *v, int n);
```

Ordena o vetor usando um **min-heap**. As funções `inserir_heap` e `retirar_heap` já estão implementadas:

- `inserir_heap(heap, &sz, valor)`: insere `valor` no heap mantendo a propriedade do min-heap.
- `retirar_heap(heap, &sz)`: remove e retorna o menor elemento do heap.

## Como compilar e executar

```bash
make
./prog
```

Você pode usar a regra `make test` para compilar e testar o programa.

---

### Entrada
A primeira linha contém um inteiro n (tamanho do vetor). A segunda linha contém n inteiros, os elementos do vetor.

### Saída
Duas linhas indicando se os algoritmos de ordenação e partição estão corretos, respectivamente.
