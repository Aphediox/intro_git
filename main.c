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
    printf("Vas a cumplir %u", edad+1);
    iteraciones(.95, 1.1);
    return 0;
}