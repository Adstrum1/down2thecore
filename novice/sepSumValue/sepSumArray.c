// Write a C program that returns the sum of the odd indexed values and the sum of the even indexed values.

#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (i % 2 == 0)
            oddSum += array[i];
        else 
            evenSum += array[i];
    }

    printf("%d\n", oddSum);   
    printf("%d\n", evenSum);

    return 0;

}