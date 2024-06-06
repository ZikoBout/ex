#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define RANGE 100

int main() {
    // Initialiser le générateur de nombres aléatoires avec le temps actuel pour avoir des résultats différents à chaque exécution.
    srand(time(0));

    int numbers[SIZE];

    // Remplir la liste avec des nombres aléatoires dans l'intervalle [0, 100[.
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % RANGE;
    }

    // Afficher les nombres pour vérification.
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
