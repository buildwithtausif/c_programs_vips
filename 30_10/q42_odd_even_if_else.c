/*
 * Program: [Check for odd-even using if-else]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	if (num % 2 == 0) {
		printf("%d is even", num);
	} else {
		printf("%d is odd", num);
	}

    return 0;
}