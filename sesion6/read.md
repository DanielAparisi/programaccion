argc (ARGument Count): almacena el número de
argumentos que se le ha pasado a nuestro programa
incluyendo el nombre de nuestro programa.

argv (ARGument Vector): es un array de punteros a
cadenas de caracteres que contienen los argumentos


En el primer argumento (argv[0]) siempre está el nombre del
programa.
• Considera un argumento nuevo cada vez que encuentra un
espacio.
• Esto puede ser evitado poniendo un argumento entre comillas
dobles.
• Todos los argumentos son cadenas de caracteres.
• Si queremos convertir a números tenemos que usar las
funciones atoi y atof (stdlib.h).


<--------FUNCIONES RECURSIVAS------------->

• Se llama función recursiva a la función que se llama a sí misma.
• Una función recursiva tiene dos partes:
X Condición de terminación: Es una condición que hace
que no se llame a sí misma.
X Parte recursiva: es donde se realizan las operaciones y se
llama a sí misma.
• Cuando programamos o analizamos una función recursiva es
fundamental reconocer/diseñar las dos partes


int recursiva ( int s)
{
    if (s == 1) // Condicion de terminacion si entra en este if NO se llama a si misma
{
    return s;
}
    else // Parte recursiva , si entra por aqui se llama a si misma
{
    return (s + recursiva (s -1) );
}
}



Comando de compilación:  gcc -o ej5.1 -I./include ./src/ej6.1.c ./src/misfunciones.c