// introduction to typedef 
/* 
typedef
C allows programmers to define new data type equivalent to the existing system data type using the typedef statement. 
Let us take the employement structure for example. Assume that the employee's date of birth has to be included in the existing structure. 
The declaration would be ... 
*/

#include <stdio.h>
typedef struct
{
    unsigned int dd; /* date */
    unsigned int mm; /* month */
    unsigned int yy; /* year */
}dob;


void main()
{
    dob person1;
    dob person2;
    person1.dd = 15;
    person1.mm = 6;
    person1.yy = 2058;
}
