#include<stdio.h>

int main()
{
	int a[1000],n,cur,temp;
	scanf("%d",&n);
	for(int i = 0;i<n;i++) scanf("%d",a+i);
	
	for(int i =1;i<n;i++)
	{
		cur = i-1;
		temp = a[i];
		while(cur >= 0 && a[cur] > temp)
		{
			a[cur+1] = a[cur];
			cur--;
		}
		a[cur+1] = temp;
	}
	
	for(int i =0;i<n;i++) printf("%d ",a[i]);
	return 0;
}