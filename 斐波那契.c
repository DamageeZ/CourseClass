#include<stdio.h>

unsigned long long fib(int n,unsigned long long a,unsigned long long b, int count)

{

       if (count == n)

              return b;

       return fib(n, b, a+b, ++count);

}
unsigned long long fib2(int n)

{

       return fib(n, 0, 1, 1);

}
int main()
{
	int x;
	//printf("5201314\n");
	//scanf("%d",&x);
	for(int i = 87;i<95;i++)
	{
		printf("%ld\n",fib2(i));	
	}
	return 0;
}