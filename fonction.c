#include <stdio.h>

int lireChoix(int choix){
    printf ("Choisissez une taille entre 5 et 10 : ");
    scanf("%d", &choix);
    return choix;
}