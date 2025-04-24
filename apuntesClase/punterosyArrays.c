#include <stdio.h>

int main()
{
    char list[3][10]={"Hi", "Very well", "Bye"};
    char *p;   
   
    // printing strings
    printf("Printing strings ... \n");
   
    // print first string of list: Hi
    p = &list[0][0];    // also valid as p = list[0];
    printf("%s\n", p);

    // print second string of list: Very well
    p = &list[1][0];
    printf("%s\n", p);

    // print thrid string of list: Bye
    p = &list[2][0];
    printf("%s\n", p);

    // print individual characters 
    printf("\nPrinting characters ... \n");
    
    p = &list[0][1];
    printf("%c\n", *p);
    
    p = &list[1][5];
    printf("%c\n", *p);
    
    p = &list[2][2];
    printf("%c\n", *p);

    // playing around
    printf("\nOther printing actions ...\n");
    
    p = &list[0][10];    // the array has only 10 characters per string; thus, printing the 10th character of the first string in reality prints the first character of the second string ("V")
    printf("%c\n", *p);

    p = &list[1][3];
    printf("%s\n", p);   // it prints "y well" 
    
    return 0;
}
