#include <stdio.h>
#include "fonction.h"

int main(){
            /*Choix*/
    int choix =0;
    choix = lireChoix(choix);
    while (choix<5 || choix>10){
        printf ("Choix invalide\n");
        choix = lireChoix(choix);
    }
    // printf ("%d", choix);

            /*Dimensions*/
    int width = choix * choix;
    int max_height = 3 * choix - 1;
    printf("%d ; %d",max_height,width);
    return 0;
}