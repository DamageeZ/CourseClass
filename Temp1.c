#include<stdio.h>

int main()

{
	int a[101],n=10,summ=0;
	double ave;
	//scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i =0;i<n-1;i++)
	{
		for(int j = 0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]-a[j+1];
				a[j+1]=a[j+1]+a[j];
				a[j] = a[j+1] - a[j];
			}
		}
	}
	for(int i =1;i<n-1;i++) summ += a[i];
	ave = (double)summ /(n-2);
	printf("%.3f",ave);
	return 0;
}