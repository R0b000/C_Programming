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
*/

#include <stdio.h>

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
}