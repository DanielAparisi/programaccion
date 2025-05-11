#include "misfunciones.h"              //incluimos nuestro fichero de cabecera, que contiene las declaraciones de nuestras funciones
void crearFichero(char *nombreFich) // cabecera de la función creaFichero, recibe una cadena con el nombre del fichero
{
   FILE *pf;                     // declaramos un puntero a FILE pf
   pf = fopen(nombreFich, "a+"); // llamamos a fopen para abrir el fichero en modo "append" (a)
   if (pf == NULL)               // si se ha producido un error de apertura de fichero
   {
   printf("ERROR de apertura del fichero %s\n", nombreFich);
   return;
   }
   char cadena[100]; // declaramos una cadena de 100 caracteres
   printf("Dame un texto a grabar, seguido de Enter: ");
   fgets(cadena, 100, stdin); // leemos por teclado una frase para la cadena (fgets - stdin)
   fputs(cadena, pf);         // grabamos la cadena en el fichero (fputs)
   if (ferror(pf))            // si hay error de grabación
      printf("ERROR al grabar en el fichero.\n");
   fclose(pf); // cerramos el fichero
}
void muestraFichero(char *nombreFich) // cabecera de la función muestraFichero, recibe una cadena con el nombre del fichero
{
    FILE *pf;                     // declaramos un puntero a FILE pf
    pf = fopen(nombreFich, "r+"); // llamamos a fopen para abrir el fichero en modo "read" (r)
    if (pf == NULL)               // si se ha producido un error de apertura de fichero
    {
        printf("ERROR: el fichero %s no existe.\n", nombreFich); // informamos por pantalla que el fichero no existe
        return;                                                  // salimos de la función
    }
    char cadena[100]; // declaramos una cadena de 100 caracteres
    printf("El contenido del fichero %s es:\n", nombreFich);
    fgets(cadena, 100, pf);          // leemos la primera frase del fichero en la cadena (fgets)(hasta el \n)
    while (!feof(pf) && !ferror(pf)) // mientras no sea el fin del fichero y no se produzca un error de lectura
    {
        printf("%s", cadena);   // imprimimos la cadena en pantalla
        fgets(cadena, 100, pf); // leemos la siguiente frase del fichero en la cadena (fgets)(hasta el \n)
    }
    if (ferror(pf))                                           // si se ha producido un error de lectura
        printf("ERROR al leer el fichero %s.\n", nombreFich); // imprimimos mensaje de error en pantalla
    fclose(pf);                                               // cerramos el fichero
}

void cambiarLetras(char *nombreFich, char a, char b)
{
    FILE *pf = fopen(nombreFich, "r"); // Abrimos el archivo en modo lectura
    if (pf == NULL)
    {
        printf("ERROR: el fichero %s no existe.\n", nombreFich);
        return;
    }

    // Determinamos el tamaño del archivo
    fseek(pf, 0, SEEK_END);
    long fileSize = ftell(pf);
    rewind(pf);

    // Reservamos memoria dinámica para leer todo el archivo
    char *cadenaTotal = (char *)malloc(fileSize + 1);
    if (cadenaTotal == NULL)
    {
        printf("ERROR: No se pudo asignar memoria.\n");
        fclose(pf);
        return;
    }

    // Leemos todo el contenido del archivo
    fread(cadenaTotal, 1, fileSize, pf);
    cadenaTotal[fileSize] = '\0'; // Aseguramos el terminador nulo
    fclose(pf);

    // Reemplazamos los caracteres
    for (int i = 0; cadenaTotal[i] != '\0'; i++)
    {
        if (cadenaTotal[i] == a)
            cadenaTotal[i] = b;
    }

    // Reabrimos el archivo en modo escritura para truncarlo y escribir el nuevo contenido
    pf = fopen(nombreFich, "w");
    if (pf == NULL)
    {
        printf("ERROR: No se pudo abrir el fichero para escritura.\n");
        free(cadenaTotal);
        return;
    }

    fputs(cadenaTotal, pf); // Escribimos el contenido modificado
    if (ferror(pf))
        printf("ERROR al grabar el fichero %s.\n", nombreFich);
    else
        printf("El fichero ha sido modificado\n");

    fclose(pf);
    free(cadenaTotal); // Liberamos la memoria dinámica
}