#include<stdio.h>
#include<math.h>
#include<time.h>
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
	unsigned int a ,b;
	clock_t start,end;
	scanf("%d %d",&a,&b);
	if(a>b) {b=a-b;	a=a-b; b=a+b;}
	start = clock();
	for(unsigned int i = a;i<=b ;i++)
	{
		if(isPrime(i)) /*continue;*/ printf("%6d is a Prime\n",i);
		//else printf("%d is not a prime Number\n",i);
	}
	end = clock();
	printf("time = %f\n",(double)(end - start)/CLK_TCK);
	return 0;
}
