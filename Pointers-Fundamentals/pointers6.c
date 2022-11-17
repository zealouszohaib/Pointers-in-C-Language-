#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(char* a)
{
	while (*a != 0)
	{
		printf("%c", *a);  //Hello
		a++;
	}
}
int main()
{
	char a[20] = "Hello";
	print(a);
	return 0;
}
