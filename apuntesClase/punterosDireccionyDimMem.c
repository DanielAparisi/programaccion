
#include <stdio.h>

int main()
{
    int var = 10;
    int *p;
    p=&var;
    
    printf("Content of Data:\t%d\n", var);
    printf("Address of data:\t%p\n", &var);
    
    printf("Content of Pointer:\t%p\n", p);
    printf("Address of pointer:\t%p\n", &p);
    
    printf("Content of Data:\t%d\n", *p);

    return 0;
}
