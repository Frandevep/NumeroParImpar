#include <stdio.h>

int es_par(int num);
int es_impar(int num);

int main() {

    int numero = 7;

    if (es_par(numero)) {
        printf("%d es par? Si\n", numero);
    } else {
        printf("%d es par? No\n", numero);
    }

    if (es_impar(numero)) {
        printf("%d es impar? Si\n", numero);
    } else {
        printf("%d es impar? No\n", numero);
    }

    return 0;
}

// Funcion para verificar si un numero es par
int es_par(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// funcion para verificar si un numero es impar
int es_impar(int num) {
    if (num % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}
