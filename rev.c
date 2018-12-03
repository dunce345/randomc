#include<stdio.h>
#include<math.h>

int rev(int a)
{
		int b=0,c;
		while(a>0)
		{
				c=a%10;
				b=b*10+c;
				a=a/10;
		}

		return b;
}

int main()
{
		int a;
		scanf("%d", &a);
		printf("%d", rev(a));
		return 0;
}
