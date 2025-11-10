/*
 * Program: [To compare and concatenate two strings (without inbuilt function)]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char string1[100], string2[100];
    printf("Please enter first string: ");
    scanf("%s", string1);
    printf("Please enter second string: ");
    scanf("%s", string2);
    //get string lengths and add null character
    int i, j;
    for (i = 0; string1[i] != '\0'; i++);
    string1[i] = '\0';
    for (j = 0; string2[j] != '\0'; j++);
    string2[j] = '\0';
    // creating a concatenation string with a length greater than string1 and string2 combined +2 for whitespace and null character
    char concat[i + j + 2];
    // now to concatenate the strings
    for (i = 0; string1[i] != '\0'; i++) {
        concat[i] = string1[i];
    }
    // adding whitespace between two string before concatenating them
    concat[i] = ' ';
    i++;
    for (j = 0; string2[j] != '\0'; i++) {
        concat[i] = string2[j];
        j++;
    }
    concat[i] = '\0';
    printf("Concatenated string: %s\n", concat);

    return 0;
}