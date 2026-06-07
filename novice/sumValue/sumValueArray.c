// Write a C program that returns the sum of the values of an integers array.

#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        sum += array[i];
    };
    printf("%d\n", sum);
    return sum;


}