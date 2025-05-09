#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MISFUNCIONES_H
#define MISFUNCIONES_
    
void mostrarArgumentosPorLineasDeComandos( FILE * file , int argc, char *argv[] );
void LeerYmodificarArchivo( FILE * file);
void ArchivoMostrarPorPantalla (FILE * file);
void CambiarElprimerCaracter( char a, char b, FILE * file);

#endif