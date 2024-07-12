/*
    7. Write a C program to display multiple variables.
    Sample Variables :
    a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
    Declaration :
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    8. Write a C program to convert specified days into years, weeks and days.
    Note: Ignore leap year.

    Test Data :
    Number of days : 1329
    Expected Output :
    Years: 3
    Weeks: 33
    Days: 3

    9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
    Test Data :
    Input the first integer: 25
    Input the second integer: 38
    Expected Output:
    Sum of the above two integers = 63
*/

#include <stdio.h>

int main(void){
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c =  %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("((int) dx) + ax =  %ld\n", ((int) dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b =  %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c =  %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);

    int days = 1329, y, w, d;

    y = (days/365);
    w = ((days - y*365)/7);
    d = days - y*365 - w*7;

    printf("The no of years, weeks and days in the no of days 1329 are: %d %d %d\n", y, w, d);

    int f, sec, sum = 0;

    printf("Enter the first and second integer: ");
    scanf("%d %d", &f, &sec);

    sum = f + sec;

    printf("The sum of the above two intergers = %d \n", sum);
}