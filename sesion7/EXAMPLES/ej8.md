void muestraFichero(char *nombreFich) //cabecera de la función muestraFichero, recibe una cadena con el nombre del fichero
{
    FILE *pf; //declaramos un puntero a FILE pf
    pf = fopen(nombreFich, "r+"); //llamamos a fopen para abrir el fichero en modo "read" (r)
    if (pf==NULL) //si se ha producido un error de apertura de fichero
    { printf("ERROR: el fichero %s no existe.\n", nombreFich); //informamos por pantalla que el fichero no existe
    return; //salimos de la función
    }
    char cadena[100]; //declaramos una cadena de 100 caracteres
    printf("El contenido del fichero %s es:\n", nombreFich);
    fgets(cadena, 100, pf); //leemos la primera frase del fichero en la cadena (fgets)(hasta el \n)
    while (!feof(pf) && !ferror(pf)) //mientras no sea el fin del fichero y no se produzca un error de lectura
    {
    printf("%s", cadena); //imprimimos la cadena en pantalla
    fgets(cadena, 100, pf); //leemos la siguiente frase del fichero en la cadena (fgets)(hasta el \n)
    }
    if (ferror(pf)) //si se ha producido un error de lectura
    printf("ERROR al leer el fichero %s.\n", nombreFich); //imprimimos mensaje de error en pantalla
    fclose(pf); //cerramos el fichero
}