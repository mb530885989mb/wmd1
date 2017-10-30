#include <stdio.h>
int main()
{
	printf("Hello World!\n");
	printf("*****\n  *****\n    *****\n      *****\n");
	int a,b,c,m;
	int max(int,int,int);
	printf("Please input a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	m=max(a,b,c);
	printf("max=%d\n",m);
	return 0;
}
int max(int a,int b,int c)
{
	int z=a;
	if(a<b) z=b;
	if(z<c) z=c;
	return z;
}