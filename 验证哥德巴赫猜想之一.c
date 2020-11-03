#include<stdio.h>
#include<math.h>

int isPrime(int a)
{
	if(a == 2) return 1;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main()
{
	int count = 0;
	for(int i =4;i<=2000;i+=2)
	{
		for(int j = 2;j<= i/2 ;j++)
		{
			if(isPrime(j)&&isPrime(i-j))
			{
				printf("%4d=%4d+%4d",i,j,i-j);
				count++;
				break;
			}
		}
		if(count % 4 == 0) printf("\n");
		else printf(" ");
	}
	return 0;
}