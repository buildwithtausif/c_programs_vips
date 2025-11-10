/*
 * Program: [Program to show the use of string function strcpy(), strcat(), strcmp(), strlen()]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 06.Day . "
 */

#include <stdio.h>
#include <string.h>
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char string1[100], string2[100];
    int i,j;
    printf("Please enter first string: ");
    scanf("%s", string1);
    printf("Please enter second string: ");
    scanf("%s", string2);
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    // get string lengths and add null character
    for (i = 0; string1[i] != '\0'; i++);
    string1[i] = '\0';
    for (j = 0; string2[j] != '\0'; j++);
    string2[j] = '\0';
    // strlen() function
    printf("String 1 length: %d\n", strlen(string1));
    printf("String 2 length: %d\n", strlen(string2));
    // strcmp() function
    printf("ASCII diff of string1 & string2: %d\n", strcmp(string1, string2));
    char string3[100];
    // strcpy() function
    strcpy(string3, string1);
    printf("String 3: %s\n", string3);
    printf("String 3 length: %d\n", strlen(string3));
    // concatenate
    strcat(string1, string2);
    printf("Concatenated string: %s\n", string1);
    

    return 0;
}