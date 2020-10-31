#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int main()
{
	double sum = 0, item = 0;
	long long temp1 =1 ,temp2 = 2;
	int sign = 1,n;
	scanf("%d",&n);
	for(int i =1;i<=n;i++)
	{
		item = sign*(double)temp2/temp1;
		sum+=item;
		sign *= -1;
		temp2+=temp1;
		temp1=temp2-temp1;
	}
	printf("%.17f\n",sum);
	return 0;
}