#include <stdio.h>

float calcular_area_quadrado(float lado){
    return lado * lado;

}

int main(int argc, char* argv[]){
    float lado; 
    
    printf("Defina o valor do lado:");
    scanf("%f", &lado);

    float area = calcular_area_quadrado(lado);

    printf("A area do quadrado eh: %.2f\n", area);

    return 0;
}