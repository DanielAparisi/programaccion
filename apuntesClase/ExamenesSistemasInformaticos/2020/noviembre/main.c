/** INCLUDE NECESARIOS **/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/** TIPO DEL DATO **/
typedef struct {
    char marca[10];
    int memoria;
    float velocidad;
}tportatil;
/** PROTOTIPOS DE LAS FUNCIONES **/
//Crea el array dinámico
tportatil* CrearBBDD(int* pUds);
//Añade un ordenador al array
tportatil* AnadirPortatil(tportatil* p, int nUds);
//Lee los datos desde teclado
tportatil LeeDatos();
//Imprime por pantalla los datos del array
tportatil* BorrarPortatil(tportatil* p, int* nUds, int pos);


//Borra un dato del array
void ImprimirBBDD(tportatil* p, int nUds);
/** FUNCIÓN MAIN **/
int main() {
        tportatil* p, *paux;
        int numUds;
        p = CrearBBDD(&numUds);
        if (p == NULL) return -1;
        paux = AnadirPortatil(p, numUds);

        if (paux != NULL)  {
            p = paux;
            numUds++;
        } else printf("No se ha podido anadir un nuevo elemento\n");
        ImprimirBBDD(p, numUds);
    return 0;
}

tportatil* AnadirPortatil(tportatil *p, int nUds) {
    tportatil unPortatil, *paux;
    printf("\nVA A AÑADIR UN NUEVO PORTATIL\n\n");
    paux = (tportatil*)realloc(p, (nUds + 1) * sizeof(tportatil));
    if (paux != NULL) {
        unPortatil = LeeDatos();
        paux[nUds] = unPortatil; //Guarda el nuevo portatil
    }
    return paux;
}

tportatil* BorrarPortatil(tportatil* p, int* nUds, int pos) {
    int i;
    if (p == NULL || *nUds <= 0 || pos < 0 || pos >= *nUds) return p;
    // Mover los elementos posteriores una posición hacia atrás
    for (i = pos; i < *nUds - 1; i++) {
        p[i] = p[i + 1];
    }
    // Reducir el tamaño del array
    tportatil* paux = (tportatil*)realloc(p, (*nUds - 1) * sizeof(tportatil));
    if (paux != NULL || *nUds - 1 == 0) {
        p = paux;
        (*nUds)--;
    }
    return p;
}
tportatil LeeDatos(tportatil* portatil) {
    printf("Introduce la marca: ");
    scanf("%9s", portatil->marca);
    printf("Introduce la memoria (GB): ");
    scanf("%d", &portatil->memoria);
    printf("Introduce la velocidad (GHz): ");
    scanf("%f", &portatil->velocidad);

    return * portatil;
}

tportatil* CrearBBDD(int* pUds) {
    int i;
    printf("¿Cuantos portatiles quieres guardar? ");
    scanf("%d", pUds);
    if (*pUds <= 0) return NULL;
    tportatil* p = (tportatil*)malloc((*pUds) * sizeof(tportatil));
    if (p == NULL) return NULL;
    for (i = 0; i < *pUds; i++) {
        printf("\nIntroduce los datos del portatil %d:\n", i + 1);
        p[i] = LeeDatos();
    }
    return p;
}