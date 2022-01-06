// Random number

#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h> // get current time

int main() {
    //seed
    srand(time(0));

    // func rand(): 1 -> 32767 ~ SHRT_MAX
    int number1 = rand();
    int number2 = rand();
    int number3 = rand();

    // custom range: use %
    //Eg: 1 -> 7
    int number = rand() % 7 + 1;

    float number4 = rand();

    printf("Number1: %d\n", number1);
    printf("Number2: %d\n", number2);
    printf("Number3: %d\n", number3);
    printf("Number: %d\n", number);

    printf("%d", SHRT_MAX);

    return 0;
}

//display current time
// time_t rawtime;
// struct tm * timeinfo;

// time(&rawtime);
// timeinfo = localtime(&rawtime);
// printf ("Current local time and date: %s", asctime(timeinfo));