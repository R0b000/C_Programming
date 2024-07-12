/*
    1. Write a C program to print your name, date of birth, and mobile number.
    Expected Output:

    Name   : Alexandra Abramov  
    DOB    : July 14, 1975  
    Mobile : 99-9999999999

    3. Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
    Expected Output:

    ######
    #
    #
    #####
    #
    #
    #
        ######
    ##      ##
    #
    #
    #
    #
    #
    ##      ##
        ######

    4. Write a C program to print the following characters in reverse.
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX

    5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
    Expected Output:
    Perimeter of the rectangle = 24 inches
    Area of the rectangle = 35 square inches

    6. Write a C program to compute the perimeter and area of a circle with a given radius.
    Expected Output:
    Perimeter of the Circle = 37.680000 inches
    Area of the Circle = 113.040001 square inches
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void) {
    printf("Name       : Alexandra Abramov\n");
    printf("DOB        : July 14, 1975\n");
    printf("Mobile     : 99-99999999\n");
    printf("######\n");
    printf("#\n");
    printf("#\n");
    printf("######\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("   ######\n");
    printf(" ##      ##\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf(" ##      ##\n");
    printf("   ######\n");
    char test[] = {'X', 'M', 'L', 'A', 'B'};
    int length = sizeof(test) / sizeof(test[0]);

    // Printing the length
    printf("Length: %d\n", length);

    // Reversing the array
    for (int i = 0; i < length / 2; i++) {
        char temp = test[i];
        test[i] = test[length - i - 1];
        test[length - i - 1] = temp;
    }

    // Printing the reversed array
    for (int i = 0; i < length; i++) {
        printf("%c", test[i]);
    }
    printf("\n"); 

    //perimeter of rectangle = 2(l+b)
    //area of rectangle = l*b

    int l = 7, b = 5, p, a;

    p = 2*(l+b);
    a = l*b;

    printf("The value of the perimeter and area of the rectangle are: %d inches %d square inches", p, a);
    printf("\n");

    //perimeter of the circle = 2* pi * r
    //area of the circle = pi * r * r

    int r;
    float perimeter = 0, area = 0;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    perimeter = 2 * PI * r;
    area = PI * r * r;

    printf("The value of the perimeter and area of the circle are: %f inches %f square inches", perimeter, area);
    printf("\n");
}