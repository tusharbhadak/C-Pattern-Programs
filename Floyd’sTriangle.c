// C Program to print the Floyd's Triangle
#include <stdio.h>

int main()
{
    int rows = 4;
    //int n = 1;
    char n = 'A';

    // outer loop to print all rows
    for (int i = 0; i < rows; i++) {

        // innter loop to print abphabet in each row
        for (int j = 0; j <= i; j++) {
            //printf("%d ", n++);
            printf("%c ", n++);  // Alphabets
        }
        printf("\n");
    }
    return 0;
}
