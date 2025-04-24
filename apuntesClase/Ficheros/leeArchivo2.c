
#include <stdio.h>
#include <stdlib.h>

void main ()
{
  char * buff ;
  int nread =0;
  int size = 0;
  FILE * pFile = NULL ;
  
  pFile = fopen ("myFile.txt","r"); // Open a TEXT file
  
  if ( pFile != NULL )
  {
    fseek (pFile , 0, SEEK_END ); // Moves the file pointer to the end
    size = ftell ( pFile ); // Storage the current position ( END)
    printf ("After moving to the end, the position of the file pointer is %d bytes \n",size );
    
    rewind ( pFile ); // Rewind the file pointer
    // Allocate memory to read the size of the file + 1 (for \0)
    buff = ( char *) malloc ( size * sizeof ( char ) +1) ;
    nread = fread (buff , size , 1, pFile ); // Read the entire size of the file
    buff [size]= '\0'; // Add the \0 at the end
    printf ("%s\n", buff );
    fclose ( pFile );
  }
  else 
  {
    printf ("Error opening myFile.txt. Does it exist?\n");
  }
  
}