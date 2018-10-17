//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

/*
 * Write a program that inputs n number of integer values
 * and return how many of that numbers are duplicate.
 * For example, if the user decides to enter the following 5 numbers:
 *      [5, 2, 4, 2, 3],
 * the program shoud inform the user that there is one duplicated number.
 */

int main() {

    int n; //Declaration of the size of the array
    int count = 0; //count, this will help us to count how many duplicates there are

    printf("how many numbers do you want?\n");
    scanf("%d",&n); //size of the array request

    int numbers[n]; //array declaration with n size

    for (int i = 0; i < n; i++) {
        printf("Number %d =", i + 1);
        scanf("%d", &numbers[i]); //array request
    }

    for (int x = 0; x < n; x++) {       //These amazing "brother loops" compare values to found a duplicate
        for (int y = x + 1; y < n; y++) {
            if (numbers[x] == numbers[y]) { //The comparation of values
                count++;
               break;
            }
        }
    }

    printf("\n%d duplicates found.", count); //output of how many duplicates there are

    return 0;
}