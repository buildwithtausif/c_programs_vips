/*
 * Program: [To find if a given string is palindrome or not]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char string1[100];
    int i, isPalindrome = 1, counter;
    printf("Please enter string: ");
    scanf("%s", string1);
    for (i = 0; string1[i] != '\0'; i++); // gives string length
    string1[i] = '\0';
    
    // check for palindrome
    for (counter = 0; counter < i/2; counter++) {
    	// compare strings from start position and end position
    	if (string1[counter] != string1[counter - 1 - i]) {
    		isPalindrome = 0;
    		break;
		}
	}

	if (isPalindrome) {
		printf("Palindromic string");
	} else {
		printf("Not a palindrome");
	}
	return 0;
}