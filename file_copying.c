/*
 * Program: file_copying.c
 * Author: Michael Guillory
 * Date: 6/1/2025

 * Description: This program reads characters from standard input and writes them to standard output.
 *              It continues to read and write characters until it encounters the end-of-file (EOF) marker.
*/

#include <stdio.h>

/* copy input to output; 2nd version */

main()
{
	int c;                  // declare variable to hold character input
	
	while ((c = getchar()) != EOF)      // read, assign, and check all in one line
        putchar(c);                     // If condition is true, print the character

return 0;
}