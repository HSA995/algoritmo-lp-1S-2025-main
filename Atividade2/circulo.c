#include <stdio.h>
#define PI 3.14

float calcular_area_circulo(float raio){
    return PI * raio * raio;
}

int main (int argc, char* argv[]){
    float raio; 

    printf("Determinde o valor do raio:");
    scanf("%f", &raio);
    
    float area = calcular_area_circulo(raio);

    printf("A area do circulo eh: %.2f\n", area);

    return 0;

}