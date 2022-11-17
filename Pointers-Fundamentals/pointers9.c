#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	 
		malloc  =>void* malloc(size_t size);
		calloc  =>calloc*(size_t num,size_t size);
				note: when we craet by malloc there is garbage value 
						while when craet by calloc it intializedn by 0

		realloc => void* realloc(void* ptr,size_t size);
							second is number of array element
		                    first argument is adress of exiting array and 

		*/
	int n;
	printf("Enter size of Array >");
	scanf("%d", &n);
	//int arr[n];//error
	int* arr = (int*) malloc(n * sizeof(int));  //dynamically created array
								/*Same As*/
//	int* arr = (int*) calloc(n , sizeof(int));  //dynamically created array
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}


	return 0;
}
