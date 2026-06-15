#!/bin/bash
echo "Executando testes ..."
echo

# Variáveis para contagem de resultados
PASS=0
FAIL=0

# Executa o programa para cada caso de teste na pasta input/
for input_file in input/*; do
    filename=$(basename "$input_file")
    echo "Resultado Teste $filename:"
    ./prog < "$input_file"
    echo "--"
done