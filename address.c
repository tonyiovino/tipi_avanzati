#include <stdio.h>

int main()
{
	float number = 7.87;

	float *address_number;

	address_number = &number;

	printf("Questo è l'indirizzo del numero che ha inserito: %p\n", address_number);

	return 0;	
}
