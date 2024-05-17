#include <stdio.h>
#define CONS 3

typedef struct
{
    char name[50], sex, cpf[12],birth[12], job[50];
    int age, code;
    float remuneration;
} Employer;

int main()
{
    Employer employer;
    FILE *arq;
    arq = fopen("employer.txt","w");
    printf("\n\nInsira o NOME do funcionario:\n>>> ");
    scanf(" %50[^\n]",employer.name);
    printf("\n\nInsira a IDADE do funcionario:\n>>> ");
    scanf(" %d",&employer.age);
    printf("\n\nInsira o SEXO do funcionario:\n>>> ");
    scanf(" %c",&employer.sex);
    printf("\n\nInsira o CPF do funcionario:\n>>> ");
    scanf(" %12[^\n]",employer.cpf);
    printf("\n\nInsira a data de NASCIMENTO do funcionario:\n>>> ");
    scanf(" %12[^\n]",employer.birth);
    printf("\n\nInsira o CODIGO do setor do funcionario:\n>>> ");
    scanf(" %d",&employer.code);
    printf("\n\nInsira o CARGO do funcionario:\n>>> ");
    scanf(" %50[^\n]",employer.job);
    printf("\n\nInsira o SALARIO do funcionario:\n>>> ");
    scanf(" %f",&employer.remuneration);

    printf("FUNCIONARIO:\t\t\t%s\nIDADE:\t\t\t%d\nSEXO:\t\t\t%c\nCPF:\t\t\t%s\nDATA DE NASCIMENTO:\t\t\t%s\nCODIGO:\t\t\t%d\nCARGO:\t\t\t%s\nSALARIO:\t\t\t%.2f",employer.name,employer.age,employer.sex,employer.cpf,employer.birth,employer.code,employer.job,employer.remuneration);
    fprintf(arq,"FUNCIONARIO:\t\t\t%s\nIDADE:\t\t\t%d\nSEXO:\t\t\t%c\nCPF:\t\t\t%s\nDATA DE NASCIMENTO:\t\t\t%s\nCODIGO:\t\t\t%d\nCARGO:\t\t\t%s\nSALARIO:\t\t\t%.2f",employer.name,employer.age,employer.sex,employer.cpf,employer.birth,employer.code,employer.job,employer.remuneration);
return 0;
}
