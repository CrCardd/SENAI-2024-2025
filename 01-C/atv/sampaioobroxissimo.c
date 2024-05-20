#include <stdio.h>
#include <stdlib.h>

// Função para remover um elemento do array
void removeElemento(int array[], int *tam, int indice) {
    // Move todos os elementos após o índice uma posição para frente
    for (int i = indice; i < *tam - 1; i++) {
        array[i] = array[i + 1];
    }

    // Reduz o tamanho do array em 1
    (*tam)--;
}

// Função para redimensionar o array
int* redimensionaArray(int *array, int *tam, int novo_tamanho) {
    // Realoca o array para o novo tamanho
    array = (int *)realloc(array, sizeof(int) * novo_tamanho);

    if (array == NULL) {
        printf("Erro ao realocar memória.");
        exit(1);
    }

    // Atualiza o tamanho do array
    *tam = novo_tamanho;

    return array;
}

int main() {
    // Exemplo de array estático
    int arrayEstatico[] = {1, 2, 3, 4, 5};
    int tamEstatico = sizeof(arrayEstatico) / sizeof(arrayEstatico[0]);
    int indiceEstatico = 2; // Índice do elemento a ser removido

    printf("Array estático antes da remoção:\n");
    for (int i = 0; i < tamEstatico; i++) {
        printf("%d ", arrayEstatico[i]);
    }
    printf("\n");

    // Remove o elemento no índice especificado
    removeElemento(arrayEstatico, &tamEstatico, indiceEstatico);

    printf("Array estático após a remoção:\n");
    for (int i = 0; i < tamEstatico; i++) {
        printf("%d ", arrayEstatico[i]);
    }
    printf("TAMANHO ÓRRA: %d", sizeof(arrayEstatico)/sizeof(arrayEstatico[0]));
    printf("\n");

    // Exemplo de array dinâmico
    int *arrayDinamico;
    int tamDinamico = 10; // Tamanho inicial do array

    // Aloca memória para o array dinamicamente
    arrayDinamico = (int *)malloc(sizeof(int) * tamDinamico);

    if (arrayDinamico == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    // Atualiza o tamanho do array dinamicamente
    int novo_tamanho = 20; // Novo tamanho desejado
    arrayDinamico = redimensionaArray(arrayDinamico, &tamDinamico, novo_tamanho);

    // Agora você pode usar o array dinâmico com o novo tamanho

    // Lembre-se de liberar a memória alocada quando terminar de usá-la
    free(arrayDinamico);

    return 0;
}
