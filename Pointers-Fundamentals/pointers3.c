#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//POINTER TO POINTER EXPLANATION
	int x = 10;
	int* p = &x;//p is pointer to an integer.
	int** q = &p;  //q is pointer to a pointer to a pointer,
						//that pointer points to an integer.
	int*** r = &q;//r is a pointer that points to a pointer(*r),
					//that points to a pointer*(*r),
						//that points to an integer.
	printf("%d\n", x);//10
	printf("%d\n", *p);//10
	printf("%d\n",**q);//10
	printf("%d\n",***r);//10
	
	return 0;
}
