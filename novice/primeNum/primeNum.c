// Write a C program that returns whether a given number is prime or not.

#include <stdio.h>

int main() {
    int num = 0;
    
    scanf("%d", &num);

    for(int i = 2; i * i <= num; i++) {
        if ((num % i) == 0) {
            printf("%s\n", "Number is not prime");
            return 0;
        } 
    }
    printf("%s\n", "Number is prime");
    return 0;
}