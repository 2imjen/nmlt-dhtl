// Array of struct

//Example struct Array

//include header file
#include <stdio.h>
#include <string.h>

//create struct student outside main func
struct Student {
    char name[25];
    float gpa;
};

int main() {
    int i;

    struct Student student1 = {"Nguyen Ba Viet", 1.1};
    struct Student student2 = {"Nguyen The Manh", 4.0};
    struct Student student3 = {"Vu Van Duong", 3.5};
    struct Student student4 = {"Nguyen Thi Ngoc Dao", 3.9};
    struct Student student5 = {"Nguyen Thuy Linh", 3.99};
    struct Student student6 = {"Nguyen Thi Ngat", 3.95};

    struct Student students[] = {student1, student2, student3, student4, student5, student6};

    for(i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        printf("%-25s", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
}