//datatypes in c and there sizes on my 4GB RAM machine

#include<stdio.h>
void  PrimitiveDataTypes()
{
	char ch='A';
	int i = 10;
	float f =3.14;
	double d = 45;
	
	printf("Primitive  Datatypes in c\n");
	printf("size of chracter :%lu \n", sizeof(ch));
	printf("size of integer: %lu \n", sizeof(i));
	printf("size of float: %lu \n", sizeof(f));
	printf("size of double:%lu \n", sizeof(d));
	printf("size of signed int:%lu \n", sizeof(signed int));
	printf("size of unsigned int:%lu \n", sizeof(unsigned int));
	printf("size of unsigned long int:%lu \n", sizeof(unsigned long int));
	printf("size of signed char:%lu \n", sizeof(signed char));
	printf("size of unsigned char:%lu \n", sizeof(unsigned char));
	printf("size of short int:%lu \n", sizeof(short int));
	printf("size of long int:%lu \n", sizeof(long int));
	printf("size of long double:%lu \n", sizeof(long double));
	printf("%05d, %5d , %-5d\n",32,32,32);
	printf("%6.3f,%06.3f,%09.3f,%-09.3f,%6.0f,%6.0f",45.6,45.6,45.6,45.6,45.4,45.6);
	//6.3== 6 column wide three digit precision==45.600
	//9.3== 9 column wide three digit precision==00045.600
	//-09.3== 9 column wide three digit precision beacause of minus left justified==45.600_ _ _ three digit precesion is mentioned therfore 0 padding is not there
	//6.0==six column wide o digit after decimal point therefore  rounding off ==_ _ _ _ 46
}



void DerivedDataTypes()
{
	printf("\nDerived Datatypes in c\n");
	int Arr[5];
	printf("Size of 5 int elements array : %lu \n", sizeof(Arr));
	printf("Size of 5th int elements array : %lu \n", sizeof(Arr[5]));
	int *p = Arr;
	printf("size of pointer : %lu \n", sizeof(*p));//in my ubuntu 16.04 pointer is of 4 byte
}




void UserDefinedDataTypes()
{
	printf("user defined Datatypes in c\n");
	struct demo
	{
		int j;
		float k;
	};

	printf("size of structure:%lu \n",sizeof(demo));
	union Data {
   					int i;
   					float f;
   					char str[20]; // gretest variables memory get allocateds
				};

	printf("size of union:%lu\n",sizeof(Data));

		enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};
		enum day{Mond, Tues, Wedn, Thurs, Frid=18, Satu=11, Sund};
		printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
   		printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d\n",Mond , Tues, Wedn, Thurs, Frid, Satu, Sund);

	printf("size of enumeration:%lu\n",sizeof(week));
	printf("Enum is nothing but the hash define statements which do not allocate any memory.but enum type is of int therefor it returns 4 i.e size of the integer\n");


}


int main()
{
printf("We are in main");
PrimitiveDataTypes();
printf("\nLong takes %lu bytes in memory\n",sizeof(long));
DerivedDataTypes();
UserDefinedDataTypes();

}
