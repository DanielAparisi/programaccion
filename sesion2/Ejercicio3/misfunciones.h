#include <stdio.h>
#ifndef MISFUNCIONES_H       //compilacion condicional (LO EQUIVALNTE A UN LAZY LOADING), se compila sólo si "no está definida" (ifndef) la constante MISFUNCIONES_H
    #define MISFUNCIONES_H   //define la constante MISFUNCIONES_H (basta su nombre, no hace falta darle valor)

    int encuentra_minimo(int array[], int num);   
    float calcula_media(int array[], int num);   

#endif                     

