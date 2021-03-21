//typedef 
#include<stdio.h>

int main()
{
	typedef char* cp;
	cp c;
	printf("the size of character pointer c is %lu bytes", sizeof(c));
	return 0;
}
//output
// 4 bytes in vs
//8 bytes in dev  c++
