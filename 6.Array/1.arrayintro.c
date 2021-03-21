#include<stdio.h>

int main()
{
	int arr[5]={10,20,30,40,50};

	printf("%d\n",arr);		//200
	printf("%d\n",arr+3);	//212
	printf("%d\n",arr[3]);	//40
	printf("%d\n",arr[3]+1);//41
	printf("%d\n",arr[1+2]);	//40
	printf("%d\n",arr[1]+arr[2]);	//50


	printf("%d\n",&arr);		//200
	printf("%d\n",&(arr[3]));	//208
	printf("%d\n",&arr+1);		//220


}