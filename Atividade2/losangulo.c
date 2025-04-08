#include <stdio.h>

float calcular_area_losangulo(float diagonal_maior, float diagonal_menor){
    return (diagonal_maior * diagonal_menor) / 2;
}

int main(int argc, char* argv[]){
    float diagonal_maior, diagonal_menor;

    printf("Determina a diagonal_maior:");
    scanf("%f", &diagonal_maior);
    printf("Determine a diagonal_menor:");
    scanf("%f", &diagonal_menor);

    float area = calcular_area_losangulo(diagonal_maior, diagonal_menor);

    printf("A area do losangulo eh: %.2f\n", area);


    return 0;

}