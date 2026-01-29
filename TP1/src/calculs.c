#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // 1. Si divisible par 11, on passe au suivant sans rien faire
        if (i % 11 == 0) {
            continue; 
        }

        // 2. Si divisible par 5 OU par 7, on ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme = somme + i;
        }

        // 3. Si la somme dépasse 5000, on arrête tout
        if (somme > 5000) {
            break;
        }
    }

    // 4. Affichage du résultat final
    printf("La somme finale est : %d\n", somme);

    return 0;
}

