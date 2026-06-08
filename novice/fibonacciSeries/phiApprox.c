// Write a C program that returns an approximation of Phi using the Fibonacci series.

#include <stdio.h>
#include <math.h>

int main() {
    double firstNum = 1.0f;
    double secondNum = 1.0f;
    
    double phiOld = 0.0;
    double phiNew = firstNum / secondNum;

    const double epsilon = 1e-12;


    while (fabs(phiNew - phiOld) > epsilon) {
        double temp;

        temp = secondNum;
        secondNum = secondNum + firstNum;
        firstNum = temp;

        phiOld = phiNew;
        phiNew = secondNum / firstNum;
    }
    
    printf("%.10lf\n", phiNew);
}