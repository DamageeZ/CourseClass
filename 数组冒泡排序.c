﻿#include<stdio.h>

int main()

{
	int a[101],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i =0;i<n-1;i++)
	{
		for(int j = 0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]-a[j+1];
				a[j+1]=a[j+1]+a[j];
				a[j] = a[j+1] - a[j];
			}
		}
	}
	for(int i =0;i<n;i++) printf("%d ",a[i]);
	return 0;
}