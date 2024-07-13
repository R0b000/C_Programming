/*
    13. Write a C program that accepts three integers and finds the maximum of three.
    Test Data :
    Input the first integer: 25
    Input the second integer: 35
    Input the third integer: 15
    Expected Output:
    Maximum value of three integers: 35
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int f, s, t, result, max;

    printf("Enter the first integer: ");
    scanf("%d", &f);
    printf("Enter the second Interger: ");
    scanf("%d", &s);
    printf("Input the third integer: ");
    scanf("%d", &t);

    if(f>=s && f>=t){
        printf("Maximum value of three integers: %d\n", f);
    }else if(s>=f && s>=t){
        printf("Maximum value of three integers: %d\n", s);
    }else if(t>=f && t>=s) {
        printf("Maximum value of three integers: %d\n", t);
    }

    //using abs()
    //simply abs() is function used to compute the absolute value of an integer. Eg: the absolute value of both -5 and 5 is 5
    result = (f + s + abs(f - s))/2;
    max= (result + t + abs(result - t))/2;

    printf("Maximum value of three integers: %d\n", max);
}