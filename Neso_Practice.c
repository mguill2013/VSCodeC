#include <stdio.h>
#include <limits.h>

int main()
{
	short int var1 = SHRT_MIN;
	short int var2 = SHRT_MAX;
	
	printf("The size of my computer's int is: %d", sizeof(int));
	printf("\nrange of short signed integer is from: %d to %d", var1, var2);
	return 0;
	
}