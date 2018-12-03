#include<stdio.h>

int main()
{
		int i,j,k=1;
		for(i=1;i<=7;i++)
		{
				for(j=7;j>=2&&j>=i;j--)
				{
						printf("%d",k);
						++k;
						printf(" ");
				}
				for(k=1;k<=i-1;k++)
				{
						printf(" ");
						printf(" ");
				}

				for(k=1;k<=i-2;k++)
				{
						printf(" ");
						printf(" ");
				}
				for(j=7;j>=0&&j>=i;j--)
				{
						printf("%d",j-i+1);
						printf(" ");
				}
				printf("\n");
		}
		return 0;
}

