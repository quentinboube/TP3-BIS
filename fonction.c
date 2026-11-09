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

void corps(int choix, char img[3*choix-1][choix*choix]){
    int width = choix * choix;
    int mid = width / 2;
    int a = width / 4;
    for (int k = 0; k < choix; k++) {
        int r = choix + k;
        int L = k * a / (choix - 1);
        int R = 2 * mid - L;
        for (int c = L; c <= R; c++) 
        {
            img[r][c] = 'S';
        }
        if (k == 0) {
            img[r][L] = '"';  
            img[r][R] = '"';
        } 
        else if (k < choix - 2) {
            img[r][L] = '\''; 
            img[r][L + 1] = 'V';
            img[r][R] = '\''; 
            img[r][R - 1] = 'V';
        }
        else if (k<L || k>R) {
            img[r][L] = ' ';
        } 
        else {
            img[r][L] = '.';  img[r][R] = '.';
        }
    }
}