#include<stdio.h>

int fac(int x)
{
		int f=0;
		if (x == 0)
			return 1;
		else
			f=(x)*fac(x-1);
		return f;
}

int main()
{
		int a;
		scanf("%d",&a);
		printf("%d", fac(a));
		return 0;
}
