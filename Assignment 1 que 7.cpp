#include <stdio.h>
#include<math.h>
int main ()
{
	int a=1,b=5,c=4,s={(a+b+c)/2},area;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of  traingle%d",area);	
}
