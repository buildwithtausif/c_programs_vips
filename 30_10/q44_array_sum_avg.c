/*
 * Program: [Show sum of n-elements of array and their average]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    long int size;
	printf("Please enter size of array: ");
	scanf("%ld", &size);
	// size of the number-array is defined by the user
	long int numArray[size];
	// get user-input for elements in array of provided size
	long int itterator;
	for (itterator = 0; itterator < size; itterator++) {
		printf("Please enter element-%ld: ", itterator+1);
		scanf("%ld", &numArray[itterator]);
	}
	// print array and output(s)
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	itterator = 0; // reset itterator
	printf("Provided array = ");
	for ( ; itterator < size; itterator++) {
		printf("%ld ", numArray[itterator]);
	}
	itterator = 0; // reset itterator
	printf("\nArray sum = ");
	long int sumOfArray = 0;
	for ( ; itterator < size; itterator++) {
		sumOfArray += numArray[itterator];
	}
	// print the sum of array
	printf("%ld", sumOfArray);
	
	itterator = 0; // reset itterator
	printf("\nArray average = ");
	long int avgOfArray = 0;
	for ( ; itterator < size; itterator++) {
		avgOfArray += (numArray[itterator]);
	}
	// print the avg
	printf("%ld", avgOfArray / size);
    return 0;
}