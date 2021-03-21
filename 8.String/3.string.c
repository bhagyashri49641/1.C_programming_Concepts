//////////////////////////////////////////////////////////////////
//
//	Write a program which accept name from user and print that name.
// 	ip: Bhagyashri Mane
// 	op: Bhagyashri Mane
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*char Name[30]={'\0'};

	printf("Please enter your name:\n");
	scanf("%[^\n]s",Name);
	printf("Your name is:\n%s\n",Name);


	
	char Namex[25];
	printf("Enter string:\n");
	gets(Namex);  //warning yete pn run hota
	printf("your name is :\n%s\n",Namex);
*/
	
 
/*	

	char *str; 
	printf("Enter string:\n");
	*(str+0) = 'G';  
	*(str+1) = 'f';   
	*(str+2) = 'G';   
	*(str+3) = '\0'; 
	printf("your name is :\n%s\n",str);
*/


/*   
	char *str; 
	str = "GfG";	 //Stored in read only part of data segment 
	*(str+1) = 'n'; // Problem: trying to modify read only memory 
	getchar(); 
*/



/*
	char str[] ="GfG"; 	// Stored in stack segment like other auto variables 
	*(str+1) ='n'; 		// No problem: String is now GnG 
	printf("your string is :\n%s\n",str);

*/

    int index=0; 
    char *string; 
    int Size=0;

    printf("Enter size of string:");
    scanf("%d",&Size);
    string = (char *)malloc(sizeof(char)*Size);   // dynamic memory allocation
    printf("Enter a string :"); 
    for(index = 0 ;index<=Size;index++)
    { 
        scanf("%c",&string[index]); 
    } 
    string[index]='\0'; //null terminated 
    puts(string); // string function in c to display a string 
    
	
	return 0;
}
