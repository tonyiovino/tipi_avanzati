#include <stdio.h>

int main()
{
	double d_user;
	int i_user;

	printf("Inserica un numero con la virgola: ");
	scanf("%lf", &d_user);

	i_user = d_user;

	

	printf("Il numero intero è d%", &i_user);
	printf("Il numero decimale è f%", &d_user);

	return 0;
}
