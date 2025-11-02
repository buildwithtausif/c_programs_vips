/*
 * Program: [Palindrome Problem: check if a 5 digit-number is a palindrome or not]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    long int num,temp, extracted_digit, reverse_num = 0; // long-int just to increase the supported numbers
	printf("Please enter a number: ");
	scanf("%ld", &num);
	if (num) {
		temp = num;
		while (num > 0) {
			extracted_digit = num % 10; // get the unit digits
			num /= 10; // delete unit digits
			reverse_num = (reverse_num * 10) + extracted_digit; // for 151 it gives 151 - a palindrome
		}
		// check for palindrome
		printf("\n\n-------------------OUTPUT-------------------\n\n");
		if (reverse_num == temp) {
			printf("%ld is a palindrome", temp);
		} else {
			printf("%ld is not a palindrome", temp);
		}
	} else {
		printf("Please enter a valid number!");
		main();
	}
    return 0;
}