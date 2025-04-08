#include <stdio.h>

float calcular_area_retangulo(float base, float altura){
    return base * altura;
}

int main(int argc, char* argv[]){
    float base, altura;

    printf("Determinde o valor da base:");
    scanf("%f", &base);
    printf("Determine o valor da altura:");
    scanf("%f", &altura);

    float area = calcular_area_retangulo(base, altura);

    printf("A area do retangulo eh: %.2f\n", area);

    return 0;

}