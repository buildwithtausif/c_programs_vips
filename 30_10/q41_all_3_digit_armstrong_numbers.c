/*
 * Program: [Find all 3 digit armstrong numbers]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    int n, temp, armstrong_sum, extracted_digit;
	// print all armstrong number b/w 100 - 999
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	printf("all armstrong number b/w 100 - 999: ");
	for (n = 100; n <= 999; n++) {
		temp = n;
		armstrong_sum = 0;
		// run the loop till n becomes 0
		while (temp > 0) {
			// extract digits
			extracted_digit = temp % 10; // extracts the unit digit of each n, if n = 153 => extracted_digit = 3
			temp /= 10; // holds the leftout digits after unit extraction i.e now n becomes 15
			
			armstrong_sum += extracted_digit*extracted_digit*extracted_digit;
		}
		if (armstrong_sum == n) {
			printf("%d ", n);
		}
	
	}
    return 0;
}