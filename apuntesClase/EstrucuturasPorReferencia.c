/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Declaration of a structure
struct student_t { // Name of the structure ( type )
char name [50]; // Field name is a char array
int id; // Field id
float mark ; // Field mark
};

void modifyMark ( struct student_t * p_alum , float mark );

void main ()
{
// Creacion of a variable student_t
    struct student_t student1 ; // Variable named student1

    strcpy ( student1 .name , " Antonio Lopez ");
    student1 .id = 1767;
    student1 . mark = 8.5;

    printf ("\ nThe student mark before calling the function is %f\n", student1 . mark );

    modifyMark (& student1 , 4.5) ;
    printf ("\ nThe student mark after calling the function is %f\n", student1 . mark );
}

void modifyMark ( struct student_t * p_alum , float mark ) {
    p_alum -> mark = mark ;
    printf ("\ nThe student mark inside modifyMark is %f\n", p_alum -> mark );
}
