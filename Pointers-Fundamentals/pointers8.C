#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//this creats a pointer veriable that store in stack
	int* p;
	//this malloc function return a void pointer 
	  //so we used (int*)to convert it into integer pointer
		//in malloc we gave type of data we want to store
		  //we mutliplied by 5 so that we craete 5 integer location 
			//i.e;array of five integers

	/*
		void*p=malloc(n*sizeof(datatype));

		*/
	p = (int*)  /*type caster*/  malloc(5      /*for craeting 5 consective locations in heap*/  *  sizeof(int)      /*giving size of data type in bytes*/);
	for (int i = 0; i < 5; i++)
	{
		*(p + i) = (i + 1) * 2;
	}
	puts("this all are stored in heap part of RAM i.e;memory ");
	for (int i = 0; i < 5; i++)
	{
		printf("location %d  ==>  %d\n",i+1, p[i]);
	}
	
	return 0;
}
