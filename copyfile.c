/*
 * Program: copyfile.chf
 * Author: Michael Guillory
 * Date: 7/29/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program copies the contents of one file to another.
    * It reads characters from the input file and writes them to the output file.
    * It handles file opening errors and ensures both files are closed properly.
 * Usage: Call the copyfile function with the input and output file names.
 * Example: copyfile("input.txt", "output.txt")
 * Note: Ensure the input file exists and the output file can be created or overwritten.
*/

#include <stdio.h>

// Function prototype for copyfile
int copyfile(const char *inputfile, const char *outputfile) { // Function to copy contents from one file to another
    FILE *fp1, *fp2; // File pointers for input and output files
    char c; // Character variable to hold each character read from the input file

    // Open the input file for reading and the output file for writing
    if((fp1 = fopen(inputfile, "r")) == NULL) { // Attempt to open the input file for reading
        printf("Error opening input file %s\n", inputfile); // Print error message if input file cannot be opened
        return -1; // Return error code if input file cannot be opened
    }
    if((fp2 = fopen(outputfile, "w")) == NULL) { // Attempt to open the output file for writing
        fclose(fp1); // Close the input file if it was opened successfully
        return -1; // Return error code if output file cannot be opened
    }

    // Copy contents from input file to output file
    c = fgetc(fp1); // Read the first character from the input file
    while(!feof(fp1)) { // Loop until the end of the input file is reached
        fputc(c, fp2); // Write the character to the output file
        c = fgetc(fp1); // Read the next character from the input file
    }

    fclose(fp1); // Close the input file
    fclose(fp2); // Close the output file
    return 0; // Return success code
}