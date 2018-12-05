#include<stdio.h>

int rsum(int n)
{
    if(n != 0)
        return n + rsum(n-1);
    else
        return n;
}

int main()
{
		int a;
		scanf("%d",&a);
		printf("%d\n",rsum(a));
		return 0;
}
