// BORRAR, RENOMBRAR Y COPIAR FICHEROS
#include <stdio.h>
#include <stdlib.h>
int existefich(char *cad);
int copiafich(char *orig, char *dest, int eswindows);

int main()
{
  char nom[40];
  // Pedir nombre del fichero a procesar
  printf("Nombre del fichero a procesar: "); gets(nom);  //debe ser un fichero existente
  if (nom[0]=='\0') exit(1);   //si pulsamos Enter sin escribir nada
  if (!existefich(nom)) { printf("Fichero %s no encontrado\n", nom); exit(1); }

  // Copiar el fichero nom a otro de nombre "fich2.txt"
  if (copiafich(nom, "fich2.txt", 1)) { printf("Fichero %s copiado\n", nom); }
  else { printf("No se pudo copiar el fichero %s\n", nom); exit(1); }

  // Renombrar fichero original con nuevo nombre "fich0.txt"
  if (rename(nom, "fich0.txt")==0) { printf("Fichero %s renombrado\n", nom); }
  else { printf("No se pudo renombrar el fichero %s\n", nom); exit(1); }

  // Eliminar el fichero "fich0.txt"
  if (remove("fich0.txt")==0) { printf("Fichero fich0.txt eliminado\n"); }
  else { printf("No se pudo eliminar el fichero fich0.txt\n"); exit(1); }

  // Renombrar fich2.txt con el nombre del fichero original
  if (rename("fich2.txt", nom)==0) { printf("Fichero fich2.txt renombrado\n"); }
  else { printf("No se pudo renombrar el fichero fich2.txt\n"); }
}

int existefich(char *cad)  //devuelve 1 si el fichero "cad" indicado existe, 0 en caso contrario
{
  FILE *pf;
  if ((pf=fopen(cad, "r"))==NULL) return 0;
  else { fclose(pf); return 1; }
}

int copiafich(char *orig, char *dest, int eswindows)   //copia el fichero "orig" en "dest", devuelve 1 si hay  xito y 0 si no
{					// Sirve para Windows y Linux, y acepta caracteres comod n  * o ?
  char *p;
  if (!existefich(orig)) return 0;      //si no existe el fichero origen, abandonamos
  p = (char *)malloc(7+strlen(orig)+strlen(dest));     //reserva din mica de memoria
  if (p==NULL) { printf("No hay memoria"); return 0; }
  if (eswindows) strcpy(p, "copy ");   	//composici n del comando a ejecutar
  else strcpy(p, "cp ");
  strcat(p, orig); strcat(p, " "); strcat(p, dest);
  system(p);       //El comando para Windows queda as :  copy fich1.txt fich2.txt
                   //Para Unix queda as :                cp fich1.txt fich2.txt
  free(p);         //liberar la memoria reservada
  return existefich(dest);  //comprobamos si existe el fichero copia
}
