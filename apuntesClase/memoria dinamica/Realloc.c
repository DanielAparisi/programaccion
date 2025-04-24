# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void main ()
{
// We allocate memory for 10 characters
char * name = ( char *) calloc (10,sizeof ( char ));

strcpy (name , "Marta ");
printf ("Short name:\t%s\n", name );

// Now we have a long name . It does not fit the array so we use realloc
name = realloc (name ,50* sizeof ( char ));

if(name != NULL)
{
  strcpy (name , "Juan Anastasio Felipe del Amor Hermoso");
  printf ("Long name:\t%s\n", name );
}

free ( name );
}
