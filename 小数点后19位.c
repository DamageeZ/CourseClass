#include<stdio.h>.

int main()
{
	for(int j = 1;j<=92;j+=1)
	{
		double sum = 0, item = 0;
		unsigned long long temp1 =1 ,temp2 = 2;
		int sign = 1;
		
		for(int i =1;i<=j;i++)
		{
			item = sign*(double)temp2/temp1;
			sum+=item;
			sign *= -1;
			temp2+=temp1;
			temp1=temp2-temp1;
		}
		printf("%.17f\n",sum);
	}
	
	return 0;
}
