/*

	qsort(A,6,sizeof(datatype),compare);
	where
	.A is an array
	.6 is size of Array
	.compare is fuction that determine the order you want to sort array.



*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare(const void* a, const void* b)
{
	int A = *((int*)a);//type casting and getting values
	int B = *((int*)b);
	return A - B;
}
int main()
{
	int A[] = { -31,22,-1,50,-6,4 };
	qsort(A, 6, 4, compare);
	for (int i = 0; i < 6; i++)
		printf("%d,", A[i]);
	return 0;
}
