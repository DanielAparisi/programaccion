/* Recorridos en un arbol binario */
#include <stdio.h>
#include <stdlib.h>

/* Declaraciones globales */
typedef struct datos      //tipo struct de cada nodo del árbol
{
  int clave, contador;
  struct datos *izqdo, *dcho;
} nodo;

/* funciones prototipo */
nodo *anadir(int num, nodo *r);
void preorden(nodo *r);
void inorden(nodo *r);
void postorden(nodo *r);
void borrararbol(nodo *r);

/* Programa principal */
int main( )
{
  int numero,c;
  nodo *raiz=NULL;         //puntero al nodo raíz primario del árbol
  
  while (1)                                    //bucle para creación del árbol
  { printf("Número:  ");  c = scanf("%d",&numero);      //leer número desde el teclado
    if (c==0) continue;                  //si se ha tecleado un dato incorrecto
    if (c==EOF) break;                  //si se ha pulsado CTRL+Z
    raiz = anadir(numero, raiz);   //insertar nuevo número en el árbol
  }

  printf("\n\nRecorrido en PREORDEN:\n"); preorden(raiz);
  printf("\n\nRecorrido en INORDEN:\n"); inorden(raiz);
  printf("\n\nRecorrido en POSTORDEN:\n"); postorden(raiz);

  borrararbol(raiz);      //eliminación de todos los nodos del árbol
}

void preorden(nodo *r)    //función recursiva
{ if (r!=NULL)
  { printf("%d ",r->clave); preorden(r->izqdo); preorden(r->dcho); }
}

void inorden(nodo *r)    //función recursiva
{ if (r!=NULL)
  { inorden(r->izqdo);
    printf("El n° %d se ha introducido %d veces\n", r->clave, r->contador);
    inorden (r->dcho);
  }
}

void postorden(nodo *r)    //función recursiva
{ if (r!=NULL)
  { postorden(r->izqdo); postorden(r->dcho); printf("%d ",r->clave); }
}

void borrararbol(nodo *r)    //función recursiva, recorrido en PostOrden
{ if (r!=NULL)
  { borrararbol(r->izqdo); borrararbol(r->dcho); free(r); }
}

nodo *anadir(int num, nodo *r)            //función recursiva
{ if (r==NULL)
  { r = (nodo *)malloc(sizeof(nodo));    //se crea nuevo nodo y se carga de datos
    if (r==NULL)
       printf ("Falta Memoria.\n");
    else
       { r->clave = num; r->contador = 1; r->izqdo = r->dcho = NULL; }
  }
  else
  { if (num < r->clave)           //si el número es menor que la clave del nodo actual
       r->izqdo = anadir(num, r->izqdo); 
    else if (num > r->clave)   //si el número es mayor que la clave del nodo actual
       r->dcho = anadir(num, r->dcho);
    else                                   //si el número es igual que la clave del nodo actual
       r->contador++;
  }
  return r;
}
