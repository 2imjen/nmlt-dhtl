// typedef: reversed keyword that give an existing data type a nickname
// It's helpful in declare struct. Eg below demonstrate this

//include header file
#include <stdio.h>
#include <string.h>

// Not use typedef
struct Human {
    char name[20];
    char phoneNumber[15];
    int age;
};

// User typedef
typedef struct {
    char name[20];
    char phoneNumber[15];
    int age;
} Male, Female;

int main() {
    //declare with pure struct
    struct Human person1 = {"Nguyen Ba Viet", "1234567890", 22};

    //declare with typedef struct
    Male boy1 = {"Vu Van Duong", "1834719847", 22};
    Female girl1 = {"Thuy Nhung", "+843289477", 22};

    //Very convenient declare with typedef struct
}