#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double t;
	if(a>b) {t=a;a=b;b=t;}
	if(a>c) {t=a;a=c;c=t;}
	if(b>c) {t=b;b=c;c=t;} 
	if(a+b>c && a>0 && b>0 && c>0)
	{
		if(fabs(a*a+b*b-c*c)  < 1E-4)
		{
			if(fabs(a-b) < 1E-4)
			{
				printf("DYZJSJX");
			}
			else printf("ZJSJX");
		}
		else if(fabs(a-b) < 1E-4 || fabs(b-c) < 1E-4)
		{
			if(fabs(a-c)<1E-4)
			{
				printf("DBSJX");
			}
			else printf("DYSJX");
		}
		else printf("YBSJX");
	}
	else printf("BSSJX");
	return 0;
	
}