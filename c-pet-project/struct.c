//This file contains all knowlegde i learn about struct in c. I will use vietlish =)))

// struct = collection of related members
//        = members can be different data types
//        = listed under one name in block memory
//        = similar to classes in other languages but hasn't method

//Include header file
#include <stdio.h>
#include <string.h>

//syntax
//Eg:
struct Student {
    char name[20];
    int age;
};

//access member by member accesses operator "."

//Init int main function an object

int main() {
    struct Student student1;

    strcpy(student1.name, "Nguyen Ba Viet");
    student1.age = 22;

    //Print to screen
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
}
