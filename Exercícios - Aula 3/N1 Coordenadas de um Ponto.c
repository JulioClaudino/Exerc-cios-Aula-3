#include <stdio.h>
#include <math.h>

int main (void) 
{
    double x, y;

    printf("Digite as coordenadas do Eixo X: ");
    scanf("%lf", &x);
    printf("Digite as coordenadas do Eixo y: ");
    scanf("%lf", &y);

    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");

    } else if (x > 0 && y > 0) {
        printf("Q1\n");
 
    } else if (x < 0 && y > 0) {
        printf("Q2\n");

    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else if (x > 0 && y < 0) {
        printf("Q4\n");

    } else if (x == 0) {
        printf("Eixo Y\n");

    } else if (y == 0) {
        printf("Eixo X\n"); 
    };
    
    system("PAUSE");
}