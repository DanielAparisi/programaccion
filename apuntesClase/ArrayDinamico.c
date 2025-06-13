#include <stdio.h>
#include <stdlib.h>

struct Fecha {
    int dia;
    int mes;
    int anio;
};

int main() {
    int n, i;
    struct Fecha *cumpleanios;

    printf("¿Cuántas fechas de cumpleaños quieres guardar? ");
    scanf("%d", &n);

    cumpleanios = (struct Fecha *)malloc(n * sizeof(struct Fecha));
    if (cumpleanios == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Introduce la fecha #%d (dd mm aaaa): ", i + 1);
        scanf("%d %d %d", &cumpleanios[i].dia, &cumpleanios[i].mes, &cumpleanios[i].anio);
    }

    printf("\nFechas de cumpleaños guardadas:\n");
    for (i = 0; i < n; i++) {
        printf("%02d/%02d/%04d\n", cumpleanios[i].dia, cumpleanios[i].mes, cumpleanios[i].anio);
    }

    free(cumpleanios);
    return 0;
}