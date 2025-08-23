#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int rm;
    char nome[32];
    float media;
}Alunos;

void imprimir(const Alunos*v, int n, const char *titulo){
    printf("%s",titulo);
    for(int i = 0; i < n; i++){
        printf("\nrm:%d , nome: %s, media: %2.f\n",v[i].rm, v[i].nome, v[i].media );
    }
}

int main (void){
    Alunos turma[] = {
        {321,"liza", 7.7f},
        {543,"ken", 10.0f},
        {765, "mik", 8.9f},
        {223, "loi", 4.6f},
        {777, "jc", 7.7f},
        {888,"amanda",3.3f},
        {426,"gigi", 10.0f},

    };
    int n = (int)(sizeof turma / sizeof turma[0]);
    imprimir(turma, n, "estado inicial");
    return 0;
}