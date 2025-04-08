#include <stdio.h>
 
 float calcular_area_trianglo(float base, float altura){
    return (base * altura) / 2;
 }

 int main (int argc, char* argv[]){
    float base, altura;


    printf("Determina a Base:");
    scanf("%f", &base);
    printf("Determine a altura:");
    scanf("%f", &altura);


    float area = calcular_area_trianglo(base, altura);

    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
 }