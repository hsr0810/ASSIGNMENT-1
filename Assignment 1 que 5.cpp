#include<stdio.h>
int main()
{
	int a=9,b=3;
	printf("Before swap a=%d b=%d",a,b);       
 a=a+b;
 b=a-b;
 a=a-b;
	printf("After swap a=%d b=%d",a,b); 
}
