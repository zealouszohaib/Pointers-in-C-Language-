#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[2][3]= {
		{1,2,3},
		{5,6,7}
	};
	int*p = a;
	for (int i = 0; i <2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			printf("%d,", a[i][j]);
			printf("%d,", *(a[i] + j));
			
			printf("%d \n", *(*(a + i) + j));
		}
	}
	
	
	return 0;
}
