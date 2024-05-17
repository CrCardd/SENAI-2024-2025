#include <stdio.h>
#include <stdlib.h>

int main(){
    char *stringAloc;
    int qtd;
    printf("Por favor insira o tamanho da frase ou palavra que será digitada:\n>>>   ");
    scanf(" %d",&qtd);
    stringAloc = malloc( qtd * sizeof(char));
    
    printf("\n\n\nEscreva!\n>>>   ");
    scanf(" %s",stringAloc);

    printf("\n\n %s",stringAloc);
    free(stringAloc);
    return 0;
}