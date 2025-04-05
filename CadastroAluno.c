#include <stdio.h>

void menu()
{
    printf("\n=== BOA NOITE ===\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Exibir aluno\n");
    printf("3 - SAIR\n");
    printf("===================\n");
}

char nome[20] = "";
int idade;
int RM;
int numAlunos = 0;

void cadastrarAluno()
{
    do
    {
        
        printf("\n-------------------\n");
        printf("Voce esta prestes as cadastrar um aluno\n");
        printf("digite o primeiro nome do aluno\n");
        scanf("%s", nome);
        printf("digite a idade do aluno\n");
        scanf("%d", &idade);
        printf("digite o RM do aluno\n");
        scanf("%d", &RM);
        printf("\n-------------------\n");
        numAlunos = 1;
    } while (numAlunos == 0);
}

void exibirAluno()
{

    if (numAlunos == 0)
    {
        printf("\n===================\n");
        printf("Nenhum aluno cadastrado");
        printf("\n===================\n");
    }
    else
    {
        printf("\n===================\n");
        
        printf("o nome do seu aluno e %s\n", nome);
        printf("A idade do seu aluno e %d\n", idade);
        printf("o RM do seu aluno e %d\n", RM);

        printf("\n===================\n");
    }
}

int main()
{
    int opcao;

    do
    {
        menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarAluno();
            break;

        case 2:
            exibirAluno();
            break;
        }
    } while (opcao != 3);

    return 0;
}