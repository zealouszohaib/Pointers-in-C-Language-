#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int a, int b)
{
	return a + b;
}


int main()
{
	int c;
	//This 
	//int *p(int, int);
	//   is prototype of function means 
	//declation a function that returns a pointer
	int (*p)(int, int);//declaring a function pointer
	p = &add;
	//or p=add;
	c = (*p)(2, 3);
	printf("%d", (*p)(2, 3));
	printf("%d", c);

	return 0;
}
