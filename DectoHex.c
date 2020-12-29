#include<stdio.h>
#include<string.h>
int main()
{
	long a;
	int count =0;
	char c[]="0123456789ABCDEF";
	char r[1000]={0};
	scanf("%ld",&a);
	while(a)
	{
		r[count++] = c[a%16];
		a/=16;
	}
	for(int i = strlen(r)-1;i>=0;i--)
	{
		printf("%c",r[i]);
	}
	return 0;
}