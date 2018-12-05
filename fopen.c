#include<stdio.h>
#define BUFFER 1000 
int main() { 
		FILE *ptr; 
		char ch; 
		char name[BUFFER];
		scanf("%s",name);
		ptr=fopen("name","r");
		while(1)
		{
				ch=fgetc(ptr);
				if(ch==EOF)
						break;
				printf("%c",ch);
		}
		fclose(ptr);
}
