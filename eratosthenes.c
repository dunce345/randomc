#include<stdio.h>

int main()
{
		int a[100],i,n=2;
		for(i=0;i<100;i++)
		{
				a[i]=i+1;
		}
		while(n<=100)
		{
			for(i=n-1;i<(100/n);i=i+n)
			{
							if(a[i]%n==0)
							{
									a[i]=0;
							}
			}
			++n;
		}
		for(i=0;i<100;i++)
		{
				if(a[i]!=0)
						printf("%d ",a[i]);
				else
						continue;
		}
		printf("\n");
		return 0;
}
