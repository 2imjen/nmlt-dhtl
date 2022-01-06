// Enum: user defined data type. mainly used to assign names to intergral constants such as: Viet = 0;
// It help program more readable

// Note: Enum constants must be unique in their scope, if has many enums then they dont match themselves enum constants

//Example Enum

//include header file
#include <stdio.h>

//create enum
enum DayOfWeek{Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7, Sun = 8};

int main() {
    //define enum
    enum DayOfWeek today = Mon;

    printf("%d", today); // 2
    // Most useful of enum is help program readable
}