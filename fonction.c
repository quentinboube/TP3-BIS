#include <stdio.h>

int lireChoix(int choix){
    printf ("Choisissez une taille entre 5 et 10 : ");
    scanf("%d", &choix);
    return choix;
}

void branche_haute(int choix, char img[3*choix-1][choix*choix]){
    int width = choix * choix;
    int mid = width / 2;
    for (int i = 0; i < choix; i++) {
        int gauche = mid - i;
        int droite = mid + i;
        for (int c=0; c < width; c++)
        {
            if (gauche < c && c < droite) {
                img[i][c] = 'S';
            }
            else if (i <= gauche - 1 || i >= droite + 1) {
                img[i][c] = ' ';
            }
        }
        img[i][gauche] = 'A';
        img[i][droite] = 'A';
        
    }
    for (int c = 0; c < mid - (choix - 1); c++)
    {
        img[choix - 1][c] = '_';
    }
    for (int c = mid + choix; c < width; c++)
    {
        img[choix - 1][c] = '_';
    }
    return;
}