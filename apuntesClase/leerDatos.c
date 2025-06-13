#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Persona p;

    printf("Introduce el nombre: ");
    fgets(p.nombre, sizeof(p.nombre), stdin);

    printf("Introduce la edad: ");
    scanf("%d", &p.edad);

    printf("Introduce la altura (en metros): ");
    scanf("%f", &p.altura);

    printf("\nDatos introducidos:\n");
    printf("Nombre: %s", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f m\n", p.altura);

    return 0;
}

//Si quieres eliminar el salto de linea 
// Eliminar salto de línea si existe
/*
    size_t len = strlen(p.nombre);
    if (len > 0 && p.nombre[len - 1] == '\n') {
        p.nombre[len - 1] = '\0';
    }
*/