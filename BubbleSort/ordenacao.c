#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de um vetor global de tamanho 10
int vetor[10];

// Calcula o tamanho do vetor dinamicamente
int tam = sizeof(vetor)/sizeof(vetor[0]);

int main()
{
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    // Preenche o vetor com números aleatórios entre 0 e 99
    for(int i = 0; i < tam; i++)
        vetor[i] = rand() % 100;

    // Variável auxiliar usada para realizar as trocas durante a ordenação
    int aux;

    // Implementação do algoritmo Bubble Sort para ordenar o vetor
    for(int i = 0; i < tam; i++) // Laço externo para percorrer o vetor
    {
        // Laço interno para comparar e trocar os elementos
        for(int j = tam - 1; j > i; j--) // Inicia do final e vai até a posição i
        {
            // Verifica se o elemento atual é menor que o anterior
            if(vetor[j] < vetor[j - 1])
            {
                // Se for, troca os dois elementos
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
            }
        } 
    }

    // Imprime os elementos do vetor já ordenado
    for(int i = 0; i < tam; i++)
        printf("%d\n", vetor[i]);

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
