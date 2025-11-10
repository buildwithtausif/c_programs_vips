/*
 * Program: [Read character array using getchar() in do-while loop and print it. Find its length and number of vowels (case-sensitive)]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	char string[100];
	int i = 0,c;
	do {
		c = getchar();
		if (c != EOF && c != '\n' && i < 99) {
			string[i] = c;
			i++;
		}
	} while (c != EOF && c != '\n' && i < 98);
	// since the characters are stored as string now we need to terminate the string using null character
	string[i] = '\0';
	// now print the string
	printf("Entered string: %s\n", string);
	// now to find string length
	for (i = 0; string[i] != '\0'; i++); // this gives string length excluding null character
	printf("Length of string: %d\n", i);
	// to find number of vowels it contain if any
	int vowel_count = 0;
	for (i = 0; string[i] != '\0'; i++) {
		switch (string[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel_count++;
				break;
			default:
				break;
		}
	}
	printf("Number of vowels: %d\n", vowel_count);
    return 0;
}