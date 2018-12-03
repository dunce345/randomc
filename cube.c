#include<stdio.h>

int cube(int *a)
{
		*a=(*a) * (*a) * (*a);
}

int main()
{
		int a=5;
		cube(&a);
		printf("%d\n", a);
		return 0;
}
