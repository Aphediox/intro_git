#include <stdio.h>
#include "funciones.h"
int main(){
    char nombre[100];
    unsigned int edad;
    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Hola %s.", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u\n", edad+1);
    printf("Iteraciones aproximadas: %f\n ", iteraciones(.95, 1.1));
    thegame();
    return 0;
}