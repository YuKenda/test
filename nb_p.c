#include <stdio.h>

int	main()
{
	int i = 0;

	printf("entrez un nombre svp\n");
	scanf("%d", &i);

	while((i >= -2147483648) && (i <= 2147483647))
	{
		if (i == 0)
		printf("votre nombre est null\n");

		else if((i % 2) == 0)
		{
			printf("votre nombre est pair\n");
		}
		else
			printf("votre nombre est impair\n");
		break;
	}
	return (0);
}
