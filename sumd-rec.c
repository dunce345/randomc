#include<stdio.h>

int sum(int a)
{
		int b,s=0;
		if(a==0)
				return s;
		else
		{
				b=a%10;
				s=b+sum(a/10);
		}
}

int main()
{
		int a,b;
		scanf("%d",&a);
		b=sum(a);
		printf("%d\n",b);
		return 0;
}
