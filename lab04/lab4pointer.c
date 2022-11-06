/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int age;
    int age2;
    int* ptr;
    int* ptr2;
    age = 10;
    age2 = 100;

    ptr = &age;
    printf("age: %d %d\n", age, *ptr);

    *ptr = 14;
    printf("age: %d %d\n", age, *ptr);

    // define another pointer variable ptr2, and make it point to age2
    ptr2 = &age2;

    // assign triple of age’s value to age2 via pointer ptr and ptr2 (i.e., 
    // without referring to age and age2). age2 is 42 now.
    *ptr2 = 3* *ptr;

    // display the value of age2, both via age2, and via its pointer ptr2
    printf("age2: %d %d\n", age2, *ptr2);

    // now let ptr2 point to age (too) by getting the address of age 
    // from pointer variable ptr (i.,e., without using &age)
    ptr2 = ptr;

    // confirm by displaying the value of ptr2’s pointee via ptr2
    printf("ptr2's current pointee: %d\n", *ptr2);

    // display value of age, both from age, and via ptr and ptr2.
    printf("age: %d %d %d\n", age, *ptr, *ptr2);

    // use ptr2 to decrease the value of age by 1. age is 13 now.
    *ptr2 = *ptr2-1;
    printf("age: %d %d %d\n", age, *ptr, *ptr2);

    // finally, display the address of age
    // Notice that here we print prt and ptr2 directly. This displays the content of the pointer 
    // variables, which is the address of age (in Hex).
    printf("%p %p %p\n",&age,ptr,ptr2);
}