/*
    11. Write a C program that accepts two item's weight and number of purchases (doubleing point values) and calculates their average value.
    Test Data :
    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4
    Expected Output:
    Average Value = 19.444444

*/

#include <stdio.h>

int main(void){
    double Weight_Item1 = 15;
    double No_of_item1 = 5;
    double Weight_Item2 = 25;
    double No_of_item2 = 4;

    double average = 0.0;

    double total_no = No_of_item1 + No_of_item2;

    double total = Weight_Item1*No_of_item1 + Weight_Item2*No_of_item2;

    average =  total / total_no ;

    printf("The total and total no are: %f %f\n", total, total_no);
    printf("Average Value: %f\n", average);
}