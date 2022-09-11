#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short numCasos, i = 0, anos = 0;
     long pA, pB;
     double g1, g2;

     scanf("%hd", &numCasos);

     while(i < numCasos){
        scanf("%ld %ld %lf %lf", &pA, &pB, &g1, &g2);

        while(pA <= pB){
             pA += (long)((pA*g1)/100);
             pB += (long)((pB*g2)/100);

             anos++;

            if(anos > 100){
                anos = 101;
                break;
            }
         }

         if(anos == 101) printf("Mais de 1 seculo.\n");
         else printf("%d anos.\n", anos);
        
         anos = 0;
         i++;
     }

     return 0;
}