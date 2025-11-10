/*
 * Program: [To copy a string to another string without inbuilt function]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char string1[100];
    int i;
    printf("Please enter string: ");
    scanf("%s", string1);
    // get string length
    for (i = 0; string1[i] != '\0'; i++);
    // print string1
    printf("String1: %s\n", string1); 
    // create a new string named string with length of string1 + 1 for null character
    char string2[i + 1];
    // now copying string 1 in string 2
    for (i = 0; string1[i] != '\0'; i++) {
        string2[i] = string1[i];
    }
    string2[i] = '\0';
    printf("String2: %s\n", string2);

    return 0;
}