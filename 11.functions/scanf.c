// scan do not allow stirng printing

#include<stdio.h>
int main()
{
int num=0;
scanf("Enter a number %d",&num);//output will expect u to write "Enter a number " first and then your desired number then only it will print it.
printf("the number entered is %d",num);
return 0;
}
