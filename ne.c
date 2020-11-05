#include<stdio.h>

int main()
{
	short a[18]={0};
	char sett,calc;
	for(int i =1;i<=17;i++)scanf("%1d",&a[i]);
	scanf("%c",&sett);
	int sum = a[1]*7+a[2]*9+a[3]*10+a[4]*5+a[5]*8+a[6]*4+a[7]*2+a[8]+a[9]*6+a[10]*3+a[11]*7+a[12]*9+a[13]*10+a[14]*5+a[15]*8+a[16]*4+a[17]*2;
	switch(sum%11)
	{
		case 0:calc = '1';break;
		case 1:calc = '0';break;
		case 2:calc = 'X';break;
		case 3:calc = '9';break;
		case 4:calc = '8';break;
		case 5:calc = '7';break;
		case 6:calc = '6';break;
		case 7:calc = '5';break;
		case 8:calc = '4';break;
		case 9:calc = '3';break;
		case 10:calc = '2';break;
	}
	if(calc == sett) printf("\nLegal ID");
	else printf("\nillegal ID");
	return 0;
}