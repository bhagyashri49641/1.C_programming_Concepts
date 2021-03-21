// Accepting string from user and printing on screen
//run every format indually by hiding other 

#include<stdio.h> // include i/o header files
#define MAX_LIMIT 50

int main()
{
	printf("--------------------------- percent s format------------------------------\n");
	char name[20];
	printf("Enter your name:\n");
	scanf("%s",name); 		// this will accept only upto space
	//scanf("%s",&name); // with ampersand or without ampersand array name gives adress only therefor it is allowed. 
	printf("Your name is %s \n",name);



	printf("--------------------------search set format----------------------\n");
	char name4[20];
	printf("Enter your name:\n");
	scanf("%[Bhagya]",name4);// jopryant he char yet ahet tovr accept krel..dusr char disl ki stop krel 
	//madhe space pn ali tr break hot ani capital asel tri pn break krt
	//scanf("%[^Bhagya]",name4);  he vakya abcd sodun baki che char gheil becuase of ^ symbol 
	//scanf("%[d-h]",name4);// d to e mdhle ahet tovr read krto
	printf("Your name is %s \n",name4);



	printf("-------------------------field width format-----------------------------------\n");
	char name3[20];
	printf("Enter your name:\n");
	scanf("%3s",name3);// this will print three char of string excluding startin spaces 
	getchar();
	printf("Your name is %s \n",name3);



	printf("----------------------getchar use accept until new line-----------------------\n");
	char ch='\0';
	char line[50];
	int location=0;
	printf("Enter one line text:\n");
	while((ch=getchar())!='\n')
	{
		line[location++]=ch;
	}
	line[location]='\0';
	printf("Enetered text is:\n %s\n",line);



	printf(" -----------------until new line percent s format--------------------\n");
	char name1[100];
	printf("Enter your name:\n");
	scanf(" %[^\n]s",name1); // this will accept the string until new line occurs
	printf("Your name is%s \n",name1);



	printf("---------------------------gets function use accept until new line-----------------------\n");
	char Plang[50];
	getchar(); // vrchi new line khaun takayla ithe getchar lihila
	// nahi lihila tr gets function newline as input gheil ani 
	printf("Entername of one programming language :\n");
	gets(Plang);
	printf("First entered programming language is:%s\n",Plang);
	printf("Enter another name of programming language:\n");
	gets(Plang);
	printf("Second entered programming language is:%s\n",Plang);



  	printf("---------------------------fgets function use accept until new line-----------------------\n");
	char str[MAX_LIMIT];
	char strr[MAX_LIMIT];
	printf("Enter first string\n"); 
	fgets(str, MAX_LIMIT, stdin); 
	printf("string is: %s",str); 
	printf("Enter second string\n"); 
	fgets(strr, MAX_LIMIT, stdin); 
	printf("string is: %s",strr);



	return 0;
}