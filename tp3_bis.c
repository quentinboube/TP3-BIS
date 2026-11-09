#include <stdio.h>
#include "fonction.h"

int main(){
    int choix =0;
    choix = lireChoix(choix);
    while (choix<5 || choix>10){
        printf ("Choix invalide\n");
        choix = lireChoix(choix);
    }
    printf ("%d", choix);
    return 0;
}