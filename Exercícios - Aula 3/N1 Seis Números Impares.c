#include <stdio.h>
#include <math.h>

int main(void) 
{
    int x, i = 0;

    printf("Digite um numero: ");
    scanf("%i", &x);
    
    if (x % 2 == 0) {
        x++;
    };
    
    while (i < 6) {
        printf("%i\n", x);
        i++;
        x += 2;
    };
    
    system("PAUSE");
}