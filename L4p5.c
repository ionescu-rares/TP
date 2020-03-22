#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, a[20] = { 1,3,2,51,5,2,0 };
	p = a;
	printf("pointerul indica spre primul element: a[0]=%d\n", a[0]);
	p++;
	printf("Dupa incrementarea adresei pointerului , indexul elementului spre care indica creste cu 1 si indica spre a[1]=%d\n", a[1]);
	(*p)--;
	printf("Dupa decrementarea adresei pointerului, valoarea  elementului spre care indica scade cu 1 : a[1]=%d\n", a[1]);
	p--;
	printf("Dupa decrementarea adresei pointerului, indexul elementului spre care indica scade cu 1 si indica spre a[0]=%d\n", a[0]);
	(*p)++;
	printf("Dupa incrementarea adresei pointerului, valoarea elementului spre care indica creste cu 1 : a[0]=%d\n", a[0]);
	system("pause");
	return 0;

}