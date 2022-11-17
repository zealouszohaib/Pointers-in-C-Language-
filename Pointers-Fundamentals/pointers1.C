#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a =10;
	int* p;      //declaration of pointers
	p = &a;      //assigning address to a pointer

	    //POINTER ARITHEMATIC
	printf("Adress p is %d\n", p);         //p is 2002
	printf("size of integer is %d bytes \n", sizeof(int ));  // 4 bytes
	printf("Adress p+1 is %d\n", p+1);     //p is 2006
	              /*
				  This is because address changes according to 
				  datatypes that a pointer points
				  in char p+1 increases by one 
				  in  int p+1 increases by 4
				  int long long int p+1 increases by 8
				  and so on.
				  IN SHORT
						P+n= P  +   sizeof(datatype)*n;
						n is increament 
				  */
	printf("Value at p+1 is %d",*( p + 1));  //Garbage value (dangerous thing)
	return 0;
}
