#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void A()
{
	printf("Hello\n");
}
void B(void (*ptr)(void))//fuction pointer as an argument
{
	ptr();//call-back function that "ptr" points to 
}
int main()
{
	//void (*p)() = A;//p points to adress of A that is a function 

	//B(p);            //we passed the adress of function to B fuction 
					 //that takes adress of function that only takes no argument
	B(A);// here A is adress of function A;
	/*line B(A) is  equlent to above two lines  */
	return 0;
}
