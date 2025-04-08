#include <stdio.h>

float calcular_area_trapezio(float B, float b, float h) {
    return ((B * b) * h) / 2;

}

int main (int argc, char* argv[]){
    float B, b, h;
    
    printf("determine a base maior:");
    scanf("%f", &B);
    printf("determine a base menor:");
    scanf("%f", &b);
    printf("determine a altura:");
    scanf("%f", &h);

    float area = calcular_area_trapezio(b, B, h);

    printf("A area do trapezio eh: %.2f\n", area); 

    return 0;

}