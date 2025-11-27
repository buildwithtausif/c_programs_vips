/*
 * Program: [Program to open a file, read integer and write into file, close and re-open]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    2025-11-22
 */

#include <stdio.h>

int main() {
    // Your code here
    printf("Tausif Alam, BCA-1EA\n\n");
    FILE *fp;
    // now entering integers in a file
    fp = fopen("./q59.txt", "w");
    if (!fp) {
        printf("Error opening file\n");
        return 1;
    }
    int data2[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++) {
        putw(data2[i], fp);
    }
    fclose(fp);
    printf("\n\nData successfully written in file");
    // now read this integer file
    fp = fopen("./q59.txt", "r");
    printf("\n\nRead from file: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", getw(fp));
    }
    fclose(fp);

    return 0;
}