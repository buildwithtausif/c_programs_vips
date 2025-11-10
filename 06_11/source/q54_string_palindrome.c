/*
 * Program: [To find if a given string is palindrome or not]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char string1[100];
    int i, j = 0, asciiDiff = 0;
    printf("Please enter string: ");
    scanf("%s", string1);
    for (i = 0; string1[i] != '\0'; i++);
    string1[i] = '\0';
    // get a new string with length greater than string1
    char string2[i + 1];
    // now to create a reverse string
    for (i = i - 1; string1[i] != '\0'; i--) {
        string2[j] = string1[i];
        j++;
    }
    string2[j] = '\0';
    // now to get the ascii difference
    for (i = 0; string1[i] != '\0'; i++) {
        asciiDiff = string1[i] - string2[i];
        if (asciiDiff != 0) {
            printf("Not a palindrome\n");
            break;
        }
        printf("Palindromic string\n");
        break;
    }

    return 0;
}