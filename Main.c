/* Include guard: */
#ifndef SIZE_OF_C
#define SIZE_OF_C

/* Importations: */
#include <stdio.h>
#include <stdbool.h>


#define SIZE_OF_C_FULL_VERSION 20260225 /* Size Of C full version define. */

/* Main code: */
int main(void)
{
	/* Array variable: */
	char array[8192] = "Pizza!";    /* Stored array variable.         */

	printf("Size of char: %zu byte(s).\n", sizeof(char));
	printf("Size of bool: %zu byte(s).\n", sizeof(bool));
	printf("Size of short int: %zu byte(s).\n", sizeof(short int));
	printf("Size of int: %zu byte(s).\n", sizeof(int));
	printf("Size of long int: %zu byte(s).\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s).\n", sizeof(long long int));
	printf("Size of float: %zu byte(s).\n", sizeof(float));
	printf("Size of double: %zu byte(s).\n", sizeof(double));
	printf("Size of long double: %zu byte(s).\n\n", sizeof(long double));
	printf("Stored string into array: %s\n", array);

	fputs("Type a new string to place in the array: ", stdout);
	fgets(array, sizeof(array), stdin);

	printf("New value: %s\n", array);
	printf("Memory value (in bytes): %zu.\n", sizeof(array));

	return 0;
}

/* End code: */
#endif
