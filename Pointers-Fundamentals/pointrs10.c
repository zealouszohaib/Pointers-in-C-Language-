#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	realloc(void* A,int size);

		this function modify the array size we pass the address of first 
		  memory location of heap and pass new numbers of memory blocks
		   as second argument .
		      here two things heppen :
		1.New numbers of memory blocks created in heap
		2.alraedy created memory blocks copied in intiall 
		  blocks of newly created array if secondly created array is larger
		  than first
	 
	*/
	int n = 0;
	printf("Enter Numbers of Array > ");
	scanf("%d", &n);
	int* arr1 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		arr1[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("arr1[%d]=%d\n", i, arr1[i]);
	}
	/*free(arr1);//this function free the values placed in array 
	             //there remains garbage values in array 
			//Differrent Compilers treat differently
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr1[i]);
	}*/
	puts("After Calling realloc");
	int* arr2 = (int*)realloc(arr1, 2*n *sizeof(int));
	//int* arr1 = (int*)realloc(arr1, 0); equalent to free(arr1)  
	for (int i = 0; i < 2*n; i++)
	{
		printf("arr1[%d]=%d\n",i, arr2[i]);
	}
	printf("\n\n&arr1=%d\n&arr2=%d\n", arr1, arr2);
	/*int* op = (int*)realloc(NULL, 2 * n * sizeof(int)); equalent to malloc
	for (int i = 0; i < 2 * n; i++)
	{
		printf("%d\n", op[i]);
	}*/



	return 0;
}





