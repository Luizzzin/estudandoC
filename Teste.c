#include <stdio.h>

void msg(){
    
    printf("bom dia\n");
}

float media(float a, float b){
    
    return(a + b) /2;
    
}

float dobro(float x){
    
    return 2 *x;
    
}
int tabuada(int n){
    
    for(int i = 1; i <= 10; i++){
        int mult =i *n ;
       printf("%d * %d = %d\n", i, n, mult); 
    }
       
        
}

int main() {
    int opcao;
    printf("Escolha :\n");
    printf("0 mensagem de bom dia\n");
    printf("1 fazer o dobro\n");
    printf("2 calcular media de 2 numeros\n");
    printf("3 tabuada\n");
    printf("--------------\n");
    scanf("%d", &opcao );
    
    switch(opcao){
        
        case 0:
            msg();
            break;
        case 1:
             
            float vezes;
            printf("Qaul numero voce quer fazer o dobro\n");
            scanf("%f", &vezes);
            float valor = dobro(vezes);
            printf("seu dobro é: %.2f \n", valor);
            break;
        case 2:
            float numUm;
            float numDois;
            printf("qual seu primeiro numero\n");
            scanf("%f", &numUm);
            printf("qual seu segundo numero?\n");
            scanf("%f", &numDois);
            float vlr = media(numUm, numDois);
            printf("media é%.2f\n", vlr);
    
           break;
           case 3:
           
           printf("----------------\n");
            printf("Sua tabuada é:\n");
            int n;
            scanf("%d", &n);
            tabuada(n);
            printf("----------------\n");
           break;
        default:
            printf("Opção inválida.\n");
        
    }
    

    return 0;
}