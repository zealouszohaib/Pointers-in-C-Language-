#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// Pointer Functions 
void printing()
{
	printf("assalam o Alaikum\n");
}
int* sum(int* a, int* b)
{
	/*
		Because stack can be over righted  
		 for safty we should use heap i.e:
			int* c=(int*)malloc(sizeof(int));
			*c =*a+*b;
			return c;
	*/
	int c = *a + *b;
	return &c;
}
int main()
{
	//pointer Functions
	int a = 4, b = 5;
	int* c = sum(&a, &b);
	printf("sum=%d", *c);
	return 0;
}
