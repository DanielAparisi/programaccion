 
/*
PROGRAMAS EN LENGUAJE C:
Ejercicio 1. Se desea crear una base de datos para almacenar los datos personales (nombre y DNI) y las
notas de los estudiantes. Para ello, se propone utilizar la estructura struct datos, tal y como se muestra a
continuación.


struct datos
{
char nombre[40]; int dni; float nota;
};


a. Crear una función TomarDatos() que permita leer desde el teclado el nombre, el DNI y la nota de un
estudiante.

b. Crear una función ImprimirDatos() que permita mostrar por pantalla los datos de un estudiante (nombre,
DNI y nota).

c. Crear el programa main() en el que se cree un array de estructuras de 100 estudiantes, se lean los datos
para dicho array desde el teclado y se muestren los datos de todo el array por pantalla. Para ello , utilice
las dos f unciones desarrolladas en los dos apartados anteriores (TomarDatos() e ImprimirDatos()).

*/


/*
    Ejercicio 2. Desarrolla un programa que administre la inf ormación de un inventario de productos en una tienda.
    Cada producto tiene un nombre (una cadena de caracteres), una cantidad en stock (un entero) y un precio por
    unidad (un f loat). El programa debe realizar las siguientes tareas:
    a. Def inir una estructura para guardar la inf ormación de cada producto.
    b. Implementar una f unción que reciba un array de estructuras y devuelva el índice del producto con el precio
    unitario más alto.
    c. Implementar una f unción que reciba un array de estructuras y devuelva el precio medio de todos los
    productos de la tienda.
    d. Crear el programa main(), declarar un array de 5 estructuras y cumplimentarlo tal y como se muestra a
    continuación. Llamar a la f unción del apartado b y mostrar, desde el main, el nombre del producto con el
    precio unitario más alto. Y llamar a la f unción del apartado c para mostrar, desde el main, el precio medio de
    todos los productos de la tienda.
    
    struct Producto productos[5] =
    { {"Manzanas", 50, 0.5},
    {"Peras", 30, 0.6},
    {"Plátanos", 20, 0.2},
    {"Uvas", 15, 1.0},
    {"Naranjas", 40, 0.4}
    };
*/