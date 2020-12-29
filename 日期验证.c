#include<stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};

typedef struct Date Date;

int Ryear(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0) return 1;
	return 0;
}

int checkDate(Date date)
{
	if(date.year<1900||date.year>2020) return 0;
	switch(date.month)
	{
		case 1:if(date.day < 1 || date.day > 31) return 0;break;
		case 2:if(Ryear(date.year))
				{
					if(date.day < 1 || date.day > 28) return 0;break;
				}
				else if(date.day < 1 || date.day > 29) return 0;break;
		case 3:if(date.day < 1 || date.day > 31) return 0;break;
		case 4:if(date.day < 1 || date.day > 30) return 0;break;
		case 5:if(date.day < 1 || date.day > 31) return 0;break;
		case 6:if(date.day < 1 || date.day > 30) return 0;break;
		case 7:if(date.day < 1 || date.day > 31) return 0;break;
		case 8:if(date.day < 1 || date.day > 31) return 0;break;
		case 9:if(date.day < 1 || date.day > 30) return 0;break;
		case 10:if(date.day < 1 || date.day > 31) return 0;break;
		case 11:if(date.day < 1 || date.day > 30) return 0;break;
		case 12:if(date.day < 1 || date.day > 31) return 0;break;
		default:return 0;break;
	}
	return 1;
}

int main()
{
	Date date;
	printf("Input a date in the format:yyyy-mm-dd\n");
	scanf("%4d-%d-%d",&date.year,&date.month,&date.day);
	while(checkDate(date)==0)
	{
		printf("Error!\nInput again in the format:yyyy-mm-dd\n");
		scanf("%4d-%d-%d",&date.year,&date.month,&date.day);
	}
	printf("%d-%d-%d",date.year,date.month,date.day);
	return 0;
}