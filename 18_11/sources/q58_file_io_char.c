/*
 * Program: [Program to open a file, read character and write into file, close and re-open]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    2025-11-22
 */

#include <stdio.h>

int main()
{
    printf("Tausif Alam, BCA-1EA\n\n");

    FILE *fp;
    fp = fopen("./file_handling_char.txt", "w");
    // // prompt error if no file is open fp return null if file do not exist
    if (!fp) {
        printf("Error opening file\n");
        return 1;
    }
    // when everything is 200ok
    // at this point a blank file is created in the system
    // write something of our into the file
    char data[40] = "this machines say i can handle files";
    // int j;
    // for (j = 0; j < 36; j++) {
    //     putc(data[j], fp);
    // }
    fputs(data, fp); // adds that string char[]
    fclose(fp);
    printf("\n\nData successfully written in file");

    // now reading from this file
    fp = fopen("./file_handling_char.txt", "r");
    printf("\n\nRead from file: ");
    // fgets read char-by-char
    while (fgets(data, 40, fp) != NULL) {
        printf("%s", data);
    }
    fclose(fp);

    return 0;
}
