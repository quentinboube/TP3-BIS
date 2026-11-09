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
    printf("%d ; %d\n",max_height,width);

            /*Declaration du tableau*/
    char img[max_height][width];

            /*Initialisation et affichage du tableau*/
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = ' ';
            printf("%c", img[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}