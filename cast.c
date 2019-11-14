#include <stdio.h>

int main()
{
	double d_user;
	float f_user;
	int i_user;

	printf("Inserica un numero con la virgola./n");
	scanf("%d", d_user);

	double d_user = (int)d_user;
	float f_user = (float)f_user;
	int i_user = (int)i_user;

	printf("Il numero intero è d%", &i_user);
	printf("Il numero decimale è d%", &f_user);

	return 0;
}
