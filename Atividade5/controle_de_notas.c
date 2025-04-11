#include <stdio.h>

// int mediaVetor(float vet[], int tam){
//     float media, soma = 0;
//     int i;

//     for(i =0; i<tam; i++){
//     soma = soma + vet[i];
//   }
//     media = (float) soma/tam;

//     return media;
// }

// int main(){
//     int alunos;
//     printf("Defina a quantidade de alunos: \n");
//     scanf("%d", &alunos);

//     float vetor[alunos];
//     printf("digite a nota:\n", vetor[0]);
//     scanf("%.2f", &vetor[0]);

//     float resultado;

//     resultado = mediaVetor(vetor, alunos);
//     printf("A media dos vetores e de %.2f\n", resultado);
// }

int main (int argc, char* argv[]){

    int alunos;

    printf("defina a quantidade de alunos:\n");
    scanf("%d", &alunos);

    float notas[alunos];

    for(int i = 0; i < alunos; i++){
        printf("\ndigite a nota do aluno %d:", i);
        scanf("%f", &notas[i]);
    }

        for(int i = 0; i < alunos; i++){
        printf("\nNota do aluno %.2f:", i, notas[i]);
    }

    return 0;

}