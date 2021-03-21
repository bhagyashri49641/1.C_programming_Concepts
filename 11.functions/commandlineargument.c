#include <stdio.h>

int main( int argc, char *argv[] )  
{

     printf("The total argument supplied are %d\n", argc);

     for (int i = 0; i < argc; ++i) 
		printf("The arguments supplied are: %s\n",argv[i]);

  return 0;
}