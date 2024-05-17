#include<stdio.h>

int main()
{
    int num_original,i;
    unsigned long long fatorial=1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&num_original);  // Recolhe do usuário a variável que terá seu fatorial calculado
    
    if(num_original<0) // Condição para caso o número seja igual ou menor que 0 o programa encerre e avise ao usuário
    {    
        printf("Erro! Fatorial de número negativo não existe.");
    }

    else
    {
        for(i=1;i<=num_original;++i) // Looping de repetição para calcular o fatorial
        {
            fatorial*=i;
        }
        printf("Fatorial de %d = %llu",num_original,fatorial); //Imprime no terminal o resultado do calculo realizado
    }
    
    return 0;
}