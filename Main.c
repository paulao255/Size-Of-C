/* Include guard: */
#ifndef SIZE_OF_C
#define SIZE_OF_C

/* Importations: */
#include <stdio.h>


/* Main code: */
int main()
{
	/* Array variable: */
	char array[8192] = "Pizza!";

	printf("Size of char: %zu byte(s).\n", sizeof(char));
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
	printf("Memory value (in bytes): %zu (8 KiBs).\n", sizeof(array));

	return 0;
}

/* End code: */
#endif
