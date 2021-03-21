//concatenation in printf

#include<stdio.h>

int main()
{
char* p="Hello\n";
printf(p);
printf("Hello""Readers");
}
/*this will give some warnings for first printf such as there is no string literals and no format specifiers but give output as follows
Hello
Hello Readers (in second printf two strings literals get concatenated )
*/


/* however printf(p"Readers"); this is also not allowed*/
