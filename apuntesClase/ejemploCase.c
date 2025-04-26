#include <stdio.h>

int main ()
{
  int i;
  char list[5]={'c', 'd', 'f', 'a', 'h'};

  do {
  printf("\nSelect which elements you want to print:\t0 (odd)\t1 (even)");
  scanf("%d", &i);
 } while ( i!=0 && i!=1 ); 

 switch(i)
  {
    case 0:
    printf("Odd elements:\t%c\t%c\t%c\n", list[0], list[2], list[4]);
    break;
    case 1:
    printf("Even elements:\t%c\t%c\n", list[1], list[3]);
    break;
  }
  
  printf("\n");
  return 0;
}

