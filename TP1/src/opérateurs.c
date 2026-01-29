#include <stdio.h>
#include <stdbool.h> // Pour utiliser le type booléen

int main() {
    int a = 16;
    int b = 3;

    printf("Valeurs : a = %d, b = %d\n\n", a, b);

    // 1 à 4. Opérations arithmétiques de base
    printf("Addition (a + b) : %d\n", a + b);
    printf("Soustraction (a - b) : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Division entière (a / b) : %d\n", a / b);

    // 5. Modulo (le reste de la division)
    printf("Modulo (a %% b) : %d\n\n", a % b);

    // 6 et 7. Comparaisons (Logique)
    // En C, 0 signifie "Faux" et 1 signifie "Vrai"
    printf("Est-ce que a est égal à b ? : %d\n", a == b);
    printf("Est-ce que a est supérieur à b ? : %d\n", a > b);

    return 0;
}


