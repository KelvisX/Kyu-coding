#include <stdio.h>      // Standard I/O functions like printf, fscanf, fopen
#include <stdlib.h>     // Standard library functions like exit

int main()
{
    int number;         // Declare an integer variable to hold the number read from the file
    FILE *fptr;         // Declare a file pointer to handle the file operations

    // Attempt to open a file named "program.txt" in read mode ("r").
    // The file path provided is for a Windows system (C drive).
    // The condition checks if the file pointer returns NULL (i.e., the file could not be opened).
    fptr = fopen("C:\\Users\\Richard\\Desktop\\c programs\\sample.txt","r");
    if (fptr == NULL) {

        // If the file could not be opened, display an error message
        printf("Error opening the file!");

        // Exit the program with a non-zero status code to indicate an error
        exit(1);
    }

    // Read an integer from the file and store it in the variable 'num'
    // fscanf reads the formatted input from the file. In this case, it reads an integer (%d)
    fscanf(fptr, "%d", &number);

    // Print the value of 'num' that was read from the file
    printf("Value of n = %d", number);

    // Close the file after reading is done to free up system resources
    fclose(fptr);

    // Return 0 to indicate successful completion of the program
    return 0;
}