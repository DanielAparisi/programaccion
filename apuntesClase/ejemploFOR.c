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

