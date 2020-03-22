#include <stdio.h>
#include <stdlib.h>
int *sum(int a, int b)
{
	int *s;
	s = (int*)malloc(sizeof(int));
	*s = a + b;
	return s;
}
int main()
{
	int a, b, *s;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	s = sum(a, b);
	printf("Suma este:%d\n", *s);
	system("pause");
	return 0;
}