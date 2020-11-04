#include<stdio.h>
short temp[1000000]={0};
int Findmax(int ori[],int n)
{
	int maxx = -1;
	for(int i =0;i<n;i++)
	{
		if(ori[i]>maxx) maxx = ori[i];
	}
	return maxx;
}

int main()
{
	int n,maxx;
	long a[2002];
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		temp[a[i]] +=1;
	}
	maxx = Findmax(a,n);
	for(int i = 0;i<=maxx;)
	{
		if(temp[i]==0)
		{
			i++;
			continue;
		}
		printf("%d ",i);
		temp[i] -= 1;
	}
	return 0;
}