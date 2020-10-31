#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	double a[1003]={0};
	char b[1003] ={0};
	int n;
	for(int i =0;i<3;i++)
	{
		n=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			cin >> a[j];
		}
		cin >> a[1002];
		for(int j = n-1;j>=0;j--)
		{
			if(a[j]!=a[1002]&&i==0) printf("%.0f ",a[j]);
			if(a[j]!=a[1002] && i==1) printf("%c",a[j]);
			if(a[j]!=a[1002] && i==2) cout << a[j];
			//if(a[j]!=a[1002]) cout << a[j] <<  " ";
			 
		}
		cout << endl;
//		for(int j=0;j<n;j++)
//		{
//			 cout << a[j];
//		}
	}
	return 0;
	
}
