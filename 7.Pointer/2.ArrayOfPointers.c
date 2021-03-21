#include<stdio.h>
int main()
{
	int i=11,j=21,k=51;

	int *arr[]={&j,&i,NULL,&k};

	int *p=arr;
	int **q=&p;
	int *x=&arr[3];

	printf("Addresses\n");
	printf("arr gives        =%d\n",arr);
	printf("&arr gives       =%d\n",&arr);
	printf("&arr[3] gives    =%d\n",&arr[3]);
	printf("i gives          =%d\n",i);
	printf("j gives          =%d\n",j);
	printf("k gives          =%d\n",k);
	printf("p gives          =%d\n",p);
	printf("q gives          =%d\n",q);
	printf("x gives          =%d\n",x);
	printf("&i gives         =%d\n",&i);
	printf("&j gives         =%d\n",&j);
	printf("&k gives         =%d\n",&k);
	printf("&p gives         =%d\n",&p);
	printf("&q gives         =%d\n",&q);
	printf("&x gives         =%d\n",&x);
	printf("i gives          =%d\n",i);
	printf("j gives          =%d\n",j);
	printf("k gives          =%d\n",k);
	printf("*p gives         =%d\n",*p);
	printf("*q gives         =%d\n",*q);
	printf("**q gives        =%d\n",**q);
	printf("*x gives         =%d\n",*x);
	printf("sizeof(arr) gives=%d\n",sizeof(arr));

	printf("arr+1 gives      =%d\n",arr+1);
	printf("&arr+1 gives     =%d\n",&arr+1);
	printf("arr[3] gives     =%d\n",arr[3]);
	printf("arr[2+1] gives   =%d\n",arr[2+1]);

	printf("*(arr+1) gives   =%d\n",*(arr+1));
	printf("*(arr[3])gives   =%d\n",*(arr[3]));
	printf("*(2+arr) gives   =%d\n",*(2+arr));
	


	return 0;
}