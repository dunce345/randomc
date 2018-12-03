#include<stdio.h>

int sum(int a)
{
		int s;
		if ((a-1)==0)
		{
				return 1;
		}
		else
		{
			s=a+sum(a-1);
		}
		return s;
}

int main()
{
		int a;
		scanf("%d", &a);
		printf("%d", sum(a));
		return 0;
}
