/*
 * Program: file_copying.c
 * Author: Michael Guillory
 * Date: 6/1/2025

 * Description: This program reads characters from standard input and writes them to standard output.
 *              It continues to read and write characters until it encounters the end-of-file (EOF) marker.
*/

#include <stdio.h>

/* copy input to output; 1st version */

main()
{
	int c;                  // declare variable to hold character input
	
	c = getchar();          // read first character
	while (c != EOF) {      // loop until EOF
		putchar(c);         // write character to output
		c = getchar();      // read next character
	}
}