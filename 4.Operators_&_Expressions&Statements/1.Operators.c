#include<stdio.h>

int main()
{
int a=10+3*8/2-3+2;
printf("%d\n",a);

///////////////////////////////////////////////////////

int b=10*3/2*3*5*2;
printf("%d\n",b);

///////////////////////////////////////////////////

int c=10;
int d=sizeof(c=c-2)+32;
printf("%d %d\n",c,d);

/////////////////////////////////////////////////////

int e=(10,20,30,40);
printf("%d\n",e);
//////////////////////////////////////////////////////

int no=10;
printf("%d %d %d\n",~no,!no,~no+1);
///////////////////////////////////////////////////////

int f=10,g=20,h;
h=(++f||--g)&&(++f||--g);
printf("%d %d %d\n",f,g,h);
//////////////////////////////////////////////////////

int i=20,j=10;
printf("%d %d %d %d\n",i/j,-i/j,i/-j,-i/-j );
//////////////////////////////////////////////////////

int k=21,l=10;
printf("%d %d %d %d",k%l,-k%l,k%-l,-k%-l );
return 0;
}


/*int fun()
{
return(10,20,30,40);
}
int gun()
{
return 10,20,30,40;
}

int main()
{
printf("%d %d",fun(),gun());
return 0;
}*/
