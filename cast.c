#include <stdio.h>

int main()
{
	double d_user;
	int i_user;

	printf("Inserica un numero con la virgola: ");
	scanf("%lf", &d_user);

	d_user = (int)i_user;

	printf("Il numero intero è %d.\n", i_user);
	printf("Il numero decimale è %f.\n", d_user);

	return 0;
}
