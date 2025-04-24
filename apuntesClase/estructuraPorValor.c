#include <stdio.h>
#include <string.h>

// Declaration of a structure
struct student_t { // Name of the structure ( type )
char name [50]; // Field name is a char array
int id; // Field id
float mark ; // Field mark
};

void showMark ( struct student_t alum )
{
alum . mark = 0.0;
printf ("\ nThe student mark is %f\n", alum . mark );
}

void main ()
{
    // Creacion of a variable student_t
    struct student_t student1 ; // Variable named student1
    strcpy ( student1 .name , " Antonio Lopez ");
    student1 .id = 1767;
    student1 . mark = 8.5;

    printf ("\ nThe student mark before calling the function is %f\n", student1 . mark );
    showMark ( student1 );
    printf ("\ nThe student mark after calling the function is %f\n", student1 . mark );
}