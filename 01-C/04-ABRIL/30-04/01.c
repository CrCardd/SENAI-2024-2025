#include<stdio.h>

int main()
{
    char operador_da_calculadora;
    float num1, num2;
    
    printf("Digite um operador para calcular (+, -, *, /):\n>>>  ");
    scanf("%c",&operador_da_calculadora);  // Recolhe do usuário a operação desejada para utilizar a calculadora
    
    printf("Digite dois números para a operação escolhida: ");
    scanf("%f %f",&num1,&num2);            // Recolhe do usuário os valores que serão inseridos na operação
    
    
    switch(operador_da_calculadora){ // Casos para diferentes operações
        case '+':
            printf("%.2f + %.2f = %.2f",num1,num2,num1+num2); // Realiza a operação de ADIÇÃO
            break;
  
        case '-':
            printf("%.2f - %.2f = %.2f",num1,num2,num1-num2); // Realiza a operação de SUBTRAÇÃO
            break;
  
        case '*':
            printf("%.2f x %.2f = %.2f",num1,num2,num1*num2); // Realiza a operação de MULTIPLICAÇÃO
            break;
  
        case '/':
            if(num2!=0) // Condição para caso ocorra do usuário tentar realizar uma divisão por '0'
            {
                printf("%.2f / %.2f = %.2f",num1,num2,num1/num2); // Realiza a operação de DIVISÃO
                break;
            }
            else // Aviso ao usuário que tentou fazer a operação de divisão com o divisor igual a '0'
            {
                printf("Erro! Divisão por zero!");
                break;
            }

        default: // Condição para caso o usuário insira uma operação inexistente nas opções
            printf("Erro! Operador inválido!");
            break;
    }
    return 0;
}