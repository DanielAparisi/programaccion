//CREACION DE UNA LISTA LINEAL
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Declaraciones globales
typedef struct s                //declaración del tipo struct, elemento de la cadena
{ int num1; float num2;		//campos para guardar los datos
  struct s *siguiente;		//puntero al siguiente elemento de la cadena
} elemento;			//nombre del tipo

elemento *lista = NULL;         //declaración del puntero maestro global, el inicio de la liista BUENAS PARACTICA INICIALIZAR A NULL UNUN PUNTERO DEL TIPO  QUE SEA 
void insertar(int n1, float n2);   //Funciones prototipo 
void insertarfin(int n1, float n2);
void imprimir(void);
void borrar(void);
void eliminar(void);

int main( )
{
  int n1; float n2;		//variables para tomar los dos datos desde teclado
  printf("Introduzca los datos N1 y N2 (teclee FIN para terminar): ");
  while (1)
  { printf("\nN1 = "); if (scanf("%d",&n1)!=1) break;
    if(n1 == -1)
      break;
    printf("\nN2 = "); if (scanf("%f",&n2)!=1) break;
    
    insertar(n1,n2);		//funcion para insertar los datos en la lista
  }
  printf("\nLos datos introducidos son:\n");
  imprimir();			//funcion para imprimir toda la lista

    printf("\nAfter adding a new element\n");
  
  insertarfin(10, 10.0);
  imprimir();			//funcion para imprimir toda la lista

  eliminar();
  printf("\nAfter removing one element in the list\n");
  imprimir();
  
  borrar();			//funcion para eliminar todos los elementos de la lista
}

void insertar(int n1, float n2)     	//funcion para introducir un nuevo elemento al principio de la lista 
{ elemento *q = (elemento *)malloc(sizeof(elemento));		//q es un puntero auxiliar
  if (q==NULL){

     printf("Falta memoria\n"); return;  

    }
    
  q->num1=n1; q->num2=n2;		//rellenamos los campos de dato con n1 y n2
  q->siguiente=lista; lista=q;		//actualizamos el campo "siguiente" y el puntero lista
}

void imprimir(void)    		//funcion para imprimir todos los elementos de la lista
{ elemento *q=lista;		//q es un puntero auxiliar, comienza apuntando al comienzo de la lista
  while (q!=NULL)		//hasta que lleguemos al final de la lista
  { printf("N1 = %d, N2 = %g\n", q->num1, q->num2); 	//imprimimos los datos del elemento actual apuntado por q
    q = q->siguiente;		//hacemos que q pase a apuntar al siguiente elemento de la cadena
  }
}

void borrar(void)   		//funcion para borrar todos los elementos de la lista
{ elemento *q=lista;		//q es un puntero auxiliar, comienza apuntando al comienzo de la lista
  while (q!=NULL)		//hasta que lleguemos al final de la lista
  { lista = lista->siguiente;	//lista pasa a apuntar a su siguiente
    free(q);			//borramos el elemento apuntado por q
    q=lista;			//igualamos q al nuevo lista
  }
}


// Insertar un nuevo elemento AL FINAL de la lista
void insertarfin(int n1, float n2)
{
  elemento *p=lista;			//p y q son punteros auxiliares
  elemento *q = (elemento *)malloc(sizeof(elemento));		//q apunta al nuevo elemento recien creado
  if (q==NULL)  { printf("Falta memoria\n"); return;  }
  if (lista==NULL)
     lista=q;				//si es el primer elemento que se inserta
  else
  {  while (p->siguiente!=NULL)		//buscamos con p el último elemento de la lista
         p=p->siguiente;
     p->siguiente=q;			//hacemos que el último elemento apunte al nuevo creado con q
  }
  q->num1=n1; q->num2=n2; q->siguiente=NULL;	//introducimos los datos en el último elemento
}

void eliminar(void)     //Eliminación general, para cualquier elemento de la lista
{
  int n1,scn;
  char rsp;
  elemento *p,*q;	//q y p son punteros auxiliares
  printf("\nDame el valor de N1 a eliminar: "); 
  scn=scanf("%d", &n1); getchar();
  if (scn!=1) return;				//si no hemos tecleado un número correcto
  q=p=lista;			
  
  //empiezan ambos apuntando al comienzo de la lista
  while (q!=NULL && q->num1!=n1)		//q es el puntero de búsqueda principal minetras no llegues al fianl de la lista y el dato no sea igual al primero 
  {  p=q; q=q->siguiente;  }   
  
  //p apuntará siempre al elemento anterior a q
  if (q==NULL)					//si hemos llegado al final de la lista
     printf("Valor no encontrado\n");
  else						//si q no es NULL, q apunta al dato y p a su anterior
  {  printf("Eliminar valor %d. ¿SEGURO? (S/N): ", n1);
     rsp = toupper(getchar()); getchar();
     if (rsp=='S')				//si respondemos que SÍ
     {  p->siguiente = q->siguiente;		//"puenteamos" el elemento apuntado por q
        if (q==lista) lista=lista->siguiente;	//si el elemento a eliminar es el inicial de la lista
        free(q);				//borramos el elemento apuntado por q
     }
  }


}
