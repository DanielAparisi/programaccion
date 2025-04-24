/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int i;
  char list[5]={'c', 'd', 'f', 'a', 'h'};

  printf("\nThis is the content of the list:\t");
  for( i=0 ; i<5; i++)
  {
      printf("%c\t", list[i]);
  }

  printf("\n");
  return 0;
}

