#include <stdio.h>

void main()
{
  char cadena[50];
  int day =0, month =0, year =0;
  char car;
  FILE * pFichero = NULL;

  pFichero = fopen ("myFile.txt","r");

if ( pFichero != NULL )
  {
    // Reads the length of cadena -1 for \0
    if ( fgets (cadena, sizeof( cadena ), pFichero )== NULL )
      printf ("Error reading with gets \n");
    else
      printf ("%s",cadena );

    // Reads with format : ints , dashes , new lines
    if( fscanf (pFichero ,"%d-%d-%d\n", &day , &month , & year ) <=0)
      printf ("Error reading with fscanf \n");
    else
      printf ("%d-%d-%d\n", day , month , year );

    // Reads the remainder of the file char by char ( until reach EOF )
    do 
    {
      car = fgetc ( pFichero );
      if( car != EOF )
        printf ("%c",car );
    } while ( car != EOF );

    printf ("\n");
    fclose ( pFichero );
  }

}
