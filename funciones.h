#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <math.h>
#include <stdio.h> 
float iteraciones(float a, float b){
    float f,n;
    f=(b-a)/0.00001;
    n=log(f)/log(2);
    return n;
}

void thegame(){
    printf("Haz perdido The Game.");
}

#endif FUNCIONES_H