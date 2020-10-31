#include<stdio.h>

int main()

{
	int a[101],n,x,addr=109;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			addr = i;
			n-=1;
			for(int j=addr;j<n;j++)
			{
				a[j] = a[j+1];
			}
		}
	}
	if(addr == 109) printf("x not found\nOutputing Original array\n");
	for(int i =0;i<n;i++) printf("%d ",a[i]);
	return 0;
}