#include<stdio.h>

int sum(int a)
{
		int sum=0,c;
		while(a>0)
		{
		c=a%10;
		a=a/10;
		sum=sum+c;
		}
		return sum;
}

int main()
{
		int a,b;
		scanf("%d",&a);
		b=sum(a);
		printf("%d\n",b);
		return 0;
}
