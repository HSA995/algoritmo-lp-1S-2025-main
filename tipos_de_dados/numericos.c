#include <stdio.h>


int main(int agrc, char* agrv[]){
    int idade;
    float altura; 
    float peso;
    
    // coleta dos dados
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura:");
    scanf("%f", &altura);
    printf("Digite o peso:");
    scanf("%f", &peso);

    //calculo do IMC?
    printf("A idade eh %d\n", idade);
    printf("A altura eh %.2f\n0 peso eh %.2f\n", altura, peso);

    float dobro_peso = peso * 2.0;
    printf("O dobro do peso eh %.2f", dobro_peso);


    printf("a idade eh: %d", idade);

    return 0;

}