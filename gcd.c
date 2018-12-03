#include<stdio.h>
#include<math.h>

int swap(int *a, int *b)
{
		int t;
		t=*a;
		*a=*b;
		*b=t;
}

int gcd(int a, int b)
{
		int g;
		if (b==0)
				return a;
		else
		{
				g=gcd(b,a%b);
				return g;
		}
}

int main()
{
		int a,b;
		scanf("%d%d", &a, &b);
		if (a<b)
				swap(&a,&b);
		printf("%d", gcd(a,b));
		return 0;
}
