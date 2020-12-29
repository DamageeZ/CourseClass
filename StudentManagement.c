#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};

typedef struct Student Stu;

int CreatFile(Stu *stu, int n)
{
	FILE* fp = fopen("D:\\Info.dat", "wb");
	if (!fp) return -1;
	fwrite(stu, sizeof(Stu), n, fp);
	fclose(fp);
	return 0;
}

int ReadOut(Stu *stu,int n)
{
	FILE* fp = fopen("D:\\Info.dat", "rb");
	if (!fp) return -1;
	fread(stu, sizeof(Stu), n, fp);
	for (int i = 0; i < n; i++)
	{
		printf("%s %s %d %lf\n", (stu+i)->ID, (stu + i)->name, (stu + i)->age, (stu + i)->score);
	}
	printf("\n");
	fclose(fp);
	return 0;
}

int sort(Stu* stu, int n)
{
	Stu temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1 ; j++)
		{
			if ((stu + j)->score <= (stu + j+1)->score)
			{
				temp = *(stu + j);
				*(stu + j) = *(stu + j + 1);
				*(stu + j + 1) = temp;
			}
		}
	}
	return 0;
}

int main()
{
	int n;
	printf("please input the n:");
	scanf("%d", &n);
	Stu* stu = (Stu*)malloc(n * sizeof(Stu));
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %d %lf", stu[i].ID, stu[i].name, &stu[i].age, &stu[i].score);
	}
	CreatFile(stu, n);
	ReadOut(stu,n);
	sort(stu, n);
	for (int i = 0; i < n; i++)
	{
		printf("%s %s %d %lf\n\n", (stu + i)->ID, (stu + i)->name, (stu + i)->age, (stu + i)->score);
	}
	return 0;
}