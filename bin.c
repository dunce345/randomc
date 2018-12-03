#include<stdio.h>
#include<math.h>
#define BUFFER 1000

int binary(int x)
{
		int b[BUFFER],c=0,i=0;
		while(x>0)
		{
				b[i]=x%2;
				x=x/2;
				i++;
		}

		for(c=i-1;c>=0;c--)
		{
				printf("%d",b[c]);
		}
		printf("\n");
}

int main()
{
		int a;
		scanf("%d", &a);
		binary(a);
		return 0;
}
