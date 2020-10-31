#include<stdio.h>
#include<math.h>

int isPrime(unsigned int n)
{
	if (n==1) return 1;
	for(unsigned int i =2;i <= sqrt(n);i++)
	{
		if(n % i==0) return 0;
	}
	return 1;
}
int main()
{
	unsigned int a ,b,count =1;
	do
	{
		scanf("%d %d",&a,&b);
	}while(a>b||a<10||b>1000);
	for(unsigned int i = a;i<=b ;i++)
	{
		if(isPrime(i))
		{
			printf("%4d ",i);
			if( count % 5==0) printf("\n");
			count ++;
		}
	}
	return 0;
}
