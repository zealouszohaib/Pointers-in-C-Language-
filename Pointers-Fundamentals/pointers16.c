/*BIT TRICKY*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*This function returns 1 if a(without sign) is graetor than b(without sign) else 0*/
int compareInc(int a, int b)
{
	if (abs(a) > abs(b))
		return 1;
	else
		return 0;
}
/*This function returns 0 if a(without sign) is graetor than b(without sign) else 1*/
int compareDec(int a, int b)
{
	if (abs(a) > abs(b))
		return 0;
	else
		return 1;
}

void BubbleSort(int A[], int size, int (*p)(int, int))//this takes fuction pointer as argument
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (p(A[j], A[j + 1]) == 1)
			{
				int hold = A[j];
				A[j] = A[j + 1];
				A[j + 1] = hold;
			}
		}
	}
}
int main()
{
	int A[] = { -3,2,-4,1,-7 };
	BubbleSort(A, 5, compareInc);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	puts("");
	BubbleSort(A, 5, compareDec);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
