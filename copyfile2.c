/*
 * Program: copyfile2.chf
 * Author: Michael Guillory
 * Date: 7/29/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program copies the contents of one file to another.
 * It reads the input file line by line and writes each line to the output file.
 * It handles file opening errors and ensures that both files are properly closed.
 * Usage: Call the function copyfile2 with the input and output file names.
 * Returns: 0 on success, -1 on failure (e.g., if input file cannot be opened).
 * Note: The function assumes that the input file is text-based and uses a buffer size of 1024 bytes.
*/

#include <stdio.h>
#define BUFSIZE 1024

// Function prototype
int copyfile2(const char *inputfile, const char *outputfile) { // Function to copy contents from inputfile to outputfile
    FILE *fp1, *fp2; // Open file pointers
    char line[BUFSIZE]; // Buffer to hold each line

    // Open the input file for reading and output file for writing
    if((fp1 = fopen(inputfile, "rb")) == NULL) {
        return -1;
    }
    if((fp2 = fopen(outputfile, "wb")) == NULL) {
        fclose(fp1);
        return -1;
    }

    // Copy contents from input file to output file
    fgets(line, BUFSIZE, fp1); // Read the first line from input file
    while(!feof(fp1)) { // Loop until end of file
        fputs(line, fp2); // Write the line to output file
        fgets(line, BUFSIZE, fp1); // Read the next line
    }
    fclose(fp1); // Close input file
    fclose(fp2); // Close output file
    return 0; // Return success
}