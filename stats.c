/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Main FIle 
 * @brief This application find out the maximum, minimum
 * mean, median and sort the array 
 *
 * 
 *
 * @author Deepesh Prakash Guragain
 * @date 31 may 017
 *
 */
#include<stdio.h>
#include"stats.h"
#define SIZE (40)

int main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154, 8, 194, 2, 6, 114, 88, 45,
			76, 123, 87, 25, 23, 200, 122, 150, 90, 92, 87, 177, 244, 201, 6,
			12, 60, 8, 2, 5, 67, 7, 87, 250, 230, 99, 3, 100, 90 };
	print_statistics(test);  //function for printing
	return 0;

}

float find_mean(unsigned char test[], int size)

{
	unsigned int i, sum = 0, avg = 0;
	for (i = 0; i < size; i++) {
		sum += test[i];

	}

	avg = sum / size;
	return avg;
}

int find_maximum(unsigned char test[], int size) {
	int largest, i;
	largest = test[0];
	for (i = 0; i < size; i++) {
		if (test[i] > largest)
			largest = test[i];
	}
	return largest;
}

int find_minimum(unsigned char test[], int size) {
	int i, smallest;
	smallest = test[0];
	for (i = 0; i < size; i++) {
		if (test[i] < smallest)
			smallest = test[i];
	}
	return smallest;
}
int  sort_array(unsigned char test[], int size)
{
	int i,j,xchange,temp;
	for(i=0;i<size-1;i++)
	{
		xchange=0;
		for(j=0;j<size-1-i;j++)
		{
			if(test[j]>test[j+1])
			{
			temp=test[j];
			test[j]=test[j+1];
			test[j+1]=temp;
			xchange++;
			}

		}
		if(xchange==0)
				break;
	}
	printf("THe sorted list is \n");

	for(i=0;i<size;i++)
	{
		printf("%d,",test[i]);

	}
	printf("\n");

return 0;
}


int find_median(unsigned char test[], int size)
{
	int median_position=0; // median formula for odd is n+1/2 th term
	
	sort_array(test,SIZE); //median formula for even x(n/2)+x(n+2)/2 th term of the array
	median_position=SIZE/2-1; // median formula is updated
	//printf("Median value is %d\n",test[median_position]);
	return test[median_position];

}
void print_statistics(unsigned char test[])
{
	printf("The median of array is : %d \n",find_median(test,SIZE));
	printf("The mean of array is : %.2f \n",find_mean(test,SIZE));
	printf("The smallest Element in the array is : %d\n",find_minimum(test,SIZE));
	printf("The largest Element in the array is : %d\n",find_maximum(test,SIZE));

}
