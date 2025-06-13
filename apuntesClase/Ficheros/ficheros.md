fputc('A',fichero); // Escribe el carácter 'A' en el fichero

fgets(texto, sizeof(texto), stdin); // Lee una línea del teclado y la guarda en 




En general, en C, las operaciones de lectura y grabación (escritura) de archivos se dividen así:

Operaciones de lectura de texto:
fgetc(FILE *f)
Lee un carácter del archivo.
fgets(char *str, int n, FILE *f)
Lee una línea o hasta n-1 caracteres.
fscanf(FILE *f, "formato", ...)
Lee datos formateados (como scanf pero desde archivo).




Operaciones de grabación (escritura) de texto:
    fputc(int c, FILE *f)
    Escribe un carácter en el archivo.
    fputs(const char *str, FILE *f)
    Escribe una cadena en el archivo.
    fprintf(FILE *f, "formato", ...)
    Escribe datos formateados (como printf pero en archivo).
    
Operaciones para archivos binarios:
    fread(void *ptr, size_t size, size_t count, FILE *f)
    Lee datos binarios.
    fwrite(const void *ptr, size_t size, size_t count, FILE *f)
    Escribe datos binarios.
Resumen:

Lectura: fgetc, fgets, fscanf, fread
Grabación: fputc, fputs, fprintf, fwrite


objetivos 

practica 1 Abrir, crear, leer, modificar y cerrar ficheros.
practica 2 Reservar memoria de forma dinámica.
practica 3 Manejar ficheros binarios.




FICHEROS BINARIOS 
Para el manejo de ficheros binarios utilizaremos:
 Abrir y cerrar: fopen y fclose.
 Leer y escribir: fread y fwrite.
 Control de errores: feof.
 Otras funciones: fseek, ftell y rewind
