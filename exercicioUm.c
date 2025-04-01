#include <stdio.h>
int main(void)
{

    int chute;
    int tentativas = 0;
    int secret = 10;

    //------------
    printf("-------------------\n");
    printf("Bem vindo ao game.\n");
    printf("-------------------\n");
    //-----------------------

    for (chute; chute != secret; tentativas++)
    {
        printf("Joga um numero ai\n");
            scanf("%d", &chute);
        if (chute == secret)
        {
            tentativas++;
            printf("------------------");
            printf("\nVoce acertou\n");
            printf("com %d tentativas\n", tentativas);
            printf("------------------\n");

        }
        else
        {

            if (chute > secret)
            {
                printf("\n------------------");
                printf("\nchute maior que o secreto\n");
                printf("------------------\n");

            }
            else
            {
                printf("\n------------------");
                printf("\nchute menor que o secreto\n");
                printf("------------------\n");

            }

            
        }
    }

    return 0;
}