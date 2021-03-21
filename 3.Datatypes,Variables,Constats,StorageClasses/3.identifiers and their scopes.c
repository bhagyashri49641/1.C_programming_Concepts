// identifiers and their scope

#include<stdio.h>

int sum_diff(int a, int b); // a and b are having function prototype scope
int diff;                   //diff is having global scope
int main()
{
	int no1, no2, sum;      // local scope
	printf("Enter two numbers");
	scanf("%d %d",&no1,&no2);
	sum = sum_diff(no1, no2);
	printf("sum is %d\n", sum);
	printf("diff is %d\n", diff);
	return 0;
}
int sum_diff(int f, int g)     //block scope
{
	int sum;                    //sum has block scope
	if (f != g)
		goto label;
	else
	{
		sum = 2 * f;
		diff = 0;
		return sum;
	}
label:                         //function scope i.e. block scope
	sum = f + g;
	diff = f - g;
	return sum;
}
