#include <stdio.h>
#include <string.h>

// Declaration of a structure
struct student_t { // Name of the structure ( type )
char name [50]; // Field name is a char array
int id; // Field id
float mark ; // Field mark
};

void main ()
{
// Creacion of a variable student_t
struct student_t student1 ; // Variable named student1
struct student_t * p_student =& student1 ; // Pointer pointing to student1
strcpy ( p_student ->name , " Antonio Lopez "); // Store the name
p_student ->id = 1767; // Store the id
p_student -> mark = 8.5; // Store the mark

printf("Name: %s\n", p_student->name);
printf("Name: %s\n", student1.name);
}
