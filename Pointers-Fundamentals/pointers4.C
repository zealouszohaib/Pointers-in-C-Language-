#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

	//Pointers and one dimantional array
int main()
{
	int a[5] = { 1,2,3,4,5 };
	//a++;//error because it is conatant pointer
	//int* const a;
	for (int i = 0; i < 5; i++)
	{
		printf("address=%d,value=%d (same) ", &a[i], a[i]);
		printf("address=%d,value=%d\n", a+i, *(a+i));
	}


	return 0;
}
