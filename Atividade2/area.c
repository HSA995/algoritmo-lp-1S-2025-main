
#include <stdio.h>
#define PI 3.14
#include <math.h>

int main(int argc, char* argv[])
{
    float raio;
    float diagonal_maior, diagonal_menor;
    char opcao;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losangulo\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Trinagulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch (opcao)
    {
    case 'c':
        printf("Circulo\n");
        float calcular_area_circulo(float raio)
        {
            return PI * raio * raio;
        }
        printf("Determinde o valor do raio:");
        scanf("%f", &raio);

        float areaC = calcular_area_circulo(raio);

        printf("A area do circulo eh: %.2f\n", areaC);

        break;

    case 'l':
        printf("Losangulo\n");
        float calcular_area_losangulo(float diagonal_maior, float diagonal_menor)
        {
            return (diagonal_maior * diagonal_menor) / 2;
        }
        printf("Determina a diagonal_maior:");
        scanf("%f", &diagonal_maior);
        printf("Determine a diagonal_menor:");
        scanf("%f", &diagonal_menor);

        float areaL = calcular_area_losangulo(diagonal_maior, diagonal_menor);

        printf("A area do losangulo eh: %.2f\n", areaL);

        break;
    case 'q':
        printf("Quadrado\n");
        break;
    case 'r':
        printf("Retangulo\n");
        break;
    case 't':
        printf("Triangulo\n");
        break;
    case 'z':
        printf("Trapezio\n");
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}