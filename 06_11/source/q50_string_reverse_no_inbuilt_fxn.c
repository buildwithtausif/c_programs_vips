/*
 * Program: [To find reverse of a string (without inbuilt function)]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    int i = 0, j = 0, c, stringLen = 0;
    // get user defined string length
    printf("Set string Length (min=1): ");
    scanf("%d", &stringLen);
    getchar(); // clears newline left by scanf in the input buffer
    char string[stringLen], rString[stringLen];
    printf("Please enter string: ");
//    scanf("%s", string);
//    int i, j = 0;
//    for (i = 0; string[i] != '\0'; i++);
	do {
		c = getchar();
		if (c != EOF && c != '\n' && i < stringLen) {
			string[i] = c;
			i++;
		}
	} while (c != EOF && c != '\n' && i < stringLen);
	
    string[i] = '\0';
    printf("\nEntered string: %s", string);
    // to reverse the string we need to run the counter from string length backwards and store it to rString in ascending order
    for (i = i - 1; i >= 0; i--) {
        rString[j] = string[i];
        j++;
    }
    rString[j] = '\0';
    printf("\nReversed string: %s\n", rString);
    return 0;
}