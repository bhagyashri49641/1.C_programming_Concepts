// C program to understand difference between 
// pointer to an integer and pointer to an 
// array of integers.


// run one part at a time

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// one dimentional array 
#include<stdio.h> 

int main() 
{ 
	int i=0;
	// Pointer to an integer 
	int *p; 
	
	// Pointer to an array of 5 integers 
	int (*ptr)[5]; 
	int arr[5]={ 3, 5, 6, 7, 9 }; 
	
	// Points to 0th element of the arr. 
	p = arr; 
	
	// Points to the whole array arr. 
	ptr = &arr; 
	
	printf("p = %p, ptr = %p\n", p, ptr); 
	
	p++; 
	ptr++; 
	
	printf("p = %p, ptr = %p\n", p, ptr); 

// pointers back to initial position
	p--; 
	ptr--; 
// program to illustrate sizes of 
// pointer of array
	printf("Size of Pointers\n");

	printf("p = %p, ptr = %p\n", p, ptr); 
	
	printf("*p = %d, *ptr = %p\n", *p, *ptr); 
	
	printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",sizeof(p), sizeof(*p)); 

	printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",sizeof(ptr), sizeof(*ptr));

	for(i=0;i<5;i++)
	{
		printf("%d\n",*(arr+i));
	}
	
	return 0; 
} 

output:
p=100	ptr=100
p=104	ptr=120

p: is pointer to 0th element of the array arr, 
while ptr is a pointer that points to the whole array arr.

The base type of p is int while base type of ptr is ‘an array of 5 integers’.
We know that the pointer arithmetic is performed relative to the base size, so if we write ptr++, 
then the pointer ptr will be shifted forward by 20 bytes.

p = 0x7ffde1ee5010, ptr = 0x7ffde1ee5010
*p = 3, *ptr = 0x7ffde1ee5010
sizeof(p) = 8, sizeof(*p) = 4
sizeof(ptr) = 8, sizeof(*ptr) = 20
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 // 2 Dimentional Array

// C program to print the values and 
// address of elements of a 2-D array 
#include<stdio.h> 

int main() 
{ 
int arr[3][4] = { 
					{ 10, 11, 12, 13 }, 
					{ 20, 21, 22, 23 }, 
					{ 30, 31, 32, 33 } 
				}; 
int i, j; 
for (i = 0; i < 3; i++) 
{ 
	printf("Address of %dth array = arr[i] gives=%p *(arr + i) gives=%p\n", i, arr[i], *(arr + i)); 
	
	for (j = 0; j < 4; j++) 
	{
		printf("arr[i][j] gives=%d *(*(arr + i) + j) gives=%d ", arr[i][j], *(*(arr + i) + j)); 

		printf("\n");
	}
	 
} 

return 0; 
} 

 OUTPUT

Address of 0th array = arr[i] gives=0x7fff30aea090 *(arr + i) gives=0x7fff30aea090
arr[i][j] gives=10 *(*(arr + i) + j) gives=10 
arr[i][j] gives=11 *(*(arr + i) + j) gives=11 
arr[i][j] gives=12 *(*(arr + i) + j) gives=12 
arr[i][j] gives=13 *(*(arr + i) + j) gives=13 
Address of 1th array = arr[i] gives=0x7fff30aea0a0 *(arr + i) gives=0x7fff30aea0a0
arr[i][j] gives=20 *(*(arr + i) + j) gives=20 
arr[i][j] gives=21 *(*(arr + i) + j) gives=21 
arr[i][j] gives=22 *(*(arr + i) + j) gives=22 
arr[i][j] gives=23 *(*(arr + i) + j) gives=23 
Address of 2th array = arr[i] gives=0x7fff30aea0b0 *(arr + i) gives=0x7fff30aea0b0
arr[i][j] gives=30 *(*(arr + i) + j) gives=30 
arr[i][j] gives=31 *(*(arr + i) + j) gives=31 
arr[i][j] gives=32 *(*(arr + i) + j) gives=32 
arr[i][j] gives=33 *(*(arr + i) + j) gives=33 


arr 		points to 0th 1D Array
*arr 		points to 0th element of 0th 1D array
arr+i 		points to ith 1D array
*(arr+i) 	points to 0th element of ith 1D array
*(arr+i)+j 	points to jth element of ith 1D array
*(*(arr+i)+j) represents the value of jth element of ith 1D array

	arr+0	-->		10		11		12		13

	arr+1   -->		20		21		22		23

	arr+2   -->		30		31		32		33<-- *(*(arr+i)+j)--> *(*(arr+2)+3)


// C program to print elements of a 2-D array 
// by scripting a pointer to an array 
#include<stdio.h> 

int main() 
{ 
int arr[3][4] = { 
					{10, 11, 12, 13}, 
					{20, 21, 22, 23}, 
					{30, 31, 32, 33} 
				}; 
int (*ptr)[4]; 
ptr = arr; 
printf("%p %p %p\n", ptr, ptr + 1, ptr + 2); 

printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2)); 

printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3)); 

printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]); 
return 0; 
} 

OUTPUT

0x7ffcbc113f10 0x7ffcbc113f20 0x7ffcbc113f30
0x7ffcbc113f10 0x7ffcbc113f20 0x7ffcbc113f30
10 22 33
10 22 33
////////////////////////////////////////////////////////////////////////////////////////////////////////////






/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 3 Dimentional Array

// C program to print the elements of 3-D 
// array using pointer notation 
#include<stdio.h> 
int main() 
{ 
int arr[2][3][2] = { 
					{ 
						{5, 10}, 
						{6, 11}, 
						{7, 12}, 
					}, 
					{ 
						{20, 30}, 
						{21, 31}, 
						{22, 32}, 
					} 
					}; 
int i, j, k; 
for (i = 0; i < 2; i++) 
{ 
	for (j = 0; j < 3; j++) 
	{ 
	for (k = 0; k < 2; k++) 
		printf("%d\t", *(*(*(arr + i) + j) +k)); 
	printf("\n"); 
	} 
} 

return 0; 
} 


OUTPUT

5	10	
6	11	
7	12	
20	30	
21	31	
22	32

arr 			points to 0th 2D array

arr+i 			points to ith 2D array

*(arr+i) 		gives base address of ith 2D array ,
				so points to 0th element of ith 2D array
				each element of 2D array is a 1D array
				so it points to 0th 1D array of ith 2D array

*(arr+i)+j 		points to jth 1D array of ith 2D array

*(*(arr+i)+j) 	gives base address of jth 1D array of ith 2D array
				so it points to 0th element of jth 1D array of ith 2D array

*(*(arr+i)+j)+k 		Represents the value of jth element f ith 1D array 

*(*(*(arr+i)+j)+k)		gives the value of kth element of jth 1D array of ith 2D array.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////