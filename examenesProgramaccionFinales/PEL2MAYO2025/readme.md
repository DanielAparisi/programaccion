Una universidad necesita gestionar el registro de estudiantes y los cursos que están cursando. Cada estudiante debe
tener los siguientes datos:
• Nombre completo: cadena de hasta 50 caracteres.
• Número de matrícula: un número entero.
• Curso inscrito, que será una estructura con la siguiente información:
– Nombre del curso: cadena de hasta 40 caracteres.
– Código del curso: cadena de 10 caracteres.
– Número de créditos: un número entero.



Tareas:
1. Define una estructura que permita almacenar los datos anteriores.------------------------------------echo

2. En el programa main(), crea un array dinámico de 10 estudiantes utilizando la estructura definida.----------------echo



3. Crea una función leer() que lea el fichero de texto de nombre datos1.txt (aportado en la Carpeta Compartida) y
cargue sus datos en el array dinámico. La función debe imprimir en pantalla los datos según van siendo cargados en
el array, y debe devolver como resultado el número de registros leídos. (Pista: usar fscanf())



4. Crea una función grabar() que grabe los datos del array en un fichero binario de nombre datos1.bin, pero
guardándolos en el orden inverso al que tiene el fichero de texto.
5. Crea una función comprobar() que lea los datos del fichero binario y los muestre en pantalla.
6. En el main(), utilizar de forma secuencial las 3 funciones anteriores, y finalmente cerrar ficheros y liberar la
memoria del array.