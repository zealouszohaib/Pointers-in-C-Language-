#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void SE(int A[])//this treated as (int* A)
{
	printf("%d\n", sizeof(A));//   4
}
int main()
{
	int A[] = { 1,2,3,4,5};
	printf("%d\n", sizeof(A));//20
	SE(A);
	return 0;
}
