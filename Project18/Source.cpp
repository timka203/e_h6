#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
void func1(int a[][5],int s)
{
	for (size_t i = 0; i <4; i++)
	{
		printf("\n");
		for (size_t j = 0; j < 5; j++)
		{
			a[i][j] = -10 + rand() % 20;
			cout << a[i][j]<<' ';
		}
	}
	printf("--------------\n");
	for (size_t i = 0; i < 4; i++)
	{
		printf("\n");
		for (size_t j = 0; j < 5; j++)
		{
			if (j == s)
			{
				if (a[i][j] < 0)
				{
					a[i][j] = -a[i][j];
			
				}
				else 
				{
					a[i][j] = -a[i][j];
				}
			}
			printf("%d   ", a[i][j]);
		}
	}

}
void task1()
{
	int a[4][5] = { 0 };
	int s;
	cin >> s;
	func1(a,s);
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}