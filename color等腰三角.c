#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>

int main()
{
	int a=9,h;
//	scanf("%d",&a);
	
	if(a%2==0)
	{
		h=a/2;
	}
	else
	{
		h=(a+1)/2;
	}
//	for(int k=0;k<5;k++)
//	{
//		switch(k%5)
//		{
//			case 0:system("color 0c");break;
//			case 1:system("color 0a");break;
//			case 2:system("color 0d");break;
//			case 3:system("color 02");break;
//			case 4:system("color 06");break;
//		}
	for(int i=0;i<h;i++)
	{
		for(int j =0;j<i;j++)//星号前空格
		{
			printf(" ");
		}
		for(int j=0;j<a-2*i;j++)//星号
		{
			printf("*");
		}
/*		for(int j =0;j<i;j++)//星号后空格
		{
			printf(" ");
		}*/
		if(i<h-1)
		printf("\n");
	}
//	system("cls");
//	}
//	system("pause");
	return 0;
}