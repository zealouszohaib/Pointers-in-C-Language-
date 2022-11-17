#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1025;
	int* ptr;
	ptr = &a;
	printf("size of integer is %d bytes \n", sizeof(int));//4 bytes
	printf("adress =%d,value=%d\n", ptr, *ptr);
								//adress =1000,value=1025
	printf("adress =%d,value=%d\n", ptr+1, *(ptr+1));//Grbage

	char* ptrc;
	ptrc = ptr;
	printf("size of character is %d bytes \n", sizeof(char));//1 byte
	printf("adress =%d,value=%d\n", ptrc, *ptrc);
								//adress =1000,value=1
	printf("adress =%d,value=%d\n", ptrc+1, *(ptrc+1));//4
	/*this is because ptr is integer poinetr and looks value in 4 bytes
	           while   ptrc is character pointer and looks value in 1 byte
	1025=00000000 00000000 00000100 00000001		   
			   
			   */
	return 0;
}
