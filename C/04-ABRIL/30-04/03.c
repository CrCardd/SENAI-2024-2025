#include <stdio.h>

//Funcao 'soma()', utilizada para somar todos os valor de 1 até um determinado número fornecido como parâmetro da operação
int soma(int numero_para_fatorial){

    if (numero_para_fatorial == 0)
    {
        return 0;
    }
    else
    {
        return numero_para_fatorial + soma(numero_para_fatorial - 1); // Função recursiva que realiza a somatória
    }
}

int main() {
    int num_original;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num_original);
    
    printf("A soma dos numeros de 1 ateh [%d] eh: %d\n", num_original, soma(num_original)); //Imprime a somatória do número escolhido para o usuário no terminal
    return 0;
}