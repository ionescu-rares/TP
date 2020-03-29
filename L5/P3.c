#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int stiva[MAX];
int vf = -1;
int stiva1[MAX];
int vf1 = -1;
void Push(int x, int *vf, int stiva[])
{
	if (*vf == MAX - 1)
	{
		printf("Stiva plina!\n");
		return;
	}
	stiva[++(*vf)] = x;
}
void Pop(int* vf, int stiva[])
{
	if (*vf == -1)
	{
		printf("Eroare!\n");
		return;
	}
	(*vf)--;
}
int Peek(int* vf, int stiva[])
{
	return stiva[*vf];
}
int IsEmpty(int* vf)
{
	if (*vf == -1)
	{
		return 1;
	}
	return 0;
}
void Print(int *vf,int stiva[])
{
	int i;
	printf("Stiva: ");
	for (i = 0; i <= *vf; i++)
	{
		printf("%d ", stiva[i]);
	}
	printf("\n");
}
int main()
{
	int aux, x, n;
	int i;
	vf = -1;
	printf("Introduceti numarul de elemente ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Elementul %d ", i + 1);
		scanf("%d", &x);

		aux = x;
		while (aux)
		{
			Push(aux % 10, &vf, stiva);
			aux = aux / 10;
		}
		aux = x;
		while (aux)
		{
			if (aux % 10 == Peek(&vf, stiva))
			{
				Push(x, &vf1, stiva1);
				break;
			}
			aux = aux / 10;
			vf--;
		
			
		}

	}
       Print(&varf1,stiva1);
	system("pause");
	return 0;
}