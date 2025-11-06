// main.c
#include <stdio.h>
#include <stdlib.h>
#include "funcoes_matematicas.c" 

int main() {
    int x = 10;
    int y = 20;
    

    int resultado = add(x, y);

    printf("A soma de %d e %d é: %d\n", x, y, resultado);
    return 0;
}