#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, R = 0;
	printf("a= ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	while (b != 0)
	{
		if (b & 1)
		R = R + a;
		a = a << 1;
		b = b >> 1;
	}
	printf("Rezultatul inmultirii: %d\n", R);
	system("pause");
	return 0;
}