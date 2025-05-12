#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#ifndef SESSION8
#define SESSION8

typedef struct{
    int ranking;
    int year;
    int votes;
    int metascore;
    char name[70];
} pelis;		//"pelis" es el nombre del TIPO de dato struct

    //declaraciones prototipo de mis funciones:
  int leeFichero1(FILE *pf, pelis *array, int num);
    //int leeFichero2(FILE *pf, pelis **pp);
  //void masModerna(pelis *array, int numElems);
  //void mayorVotos(pelis *array, int numElems);

#endif 