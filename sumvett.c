#include <stdio.h>

int main()
{
	int intero[3];
	int somma;
	float media;

	printf("Inserisca tre interi.\n");
	printf("1): ");
	scanf("%d", &intero[0]);

	printf("2): ");
	scanf("%d", &intero[1]);

	printf("3): ");
	scanf("%d", &intero[2]);

	somma = intero[0] + intero[1] + intero[2];
	media = somma / 3.0;

	printf("La somma è %d\n", somma);
	printf("La media è %f\n", media);

	return 0;
}
