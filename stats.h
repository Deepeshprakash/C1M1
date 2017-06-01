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
 * @file STATICAL LIBRARY
 * @ This library gives mean median maximum and minimum value of the 1-D array
 *
 * accepts array and gives the mean median sort and find maxm and minm
 *
 * @author Deepesh Prakash Guragain
 * @date May 31 2017
 *
 */

#ifndef STATS_H_
#define STATS_H_


/**
 * @This function accept an array and size of the array
 * find the minimum element in the array
 * and return the array to the calling function
 *
 *
 *
 * @param test is an array input to this function
 * @param size is the length of the array which is input to the function
 *
 *
 * @return  minimum value which is integer is return value from this function
 */
int find_minimum(unsigned char test[],int size);
/**
 * @This function accept an array and size of the array
 * find the maximum element in the array
 * and return the array to the calling function
 *
 *
 *
 * @param test is an array input to this function
 * @param size is the length of the array which is input to the function
 *
 *
 * @return  maximum value element of an array value which is integer is return value from this function
 */
int find_maximum(unsigned char test[], int size);
/**
 * @This function accept an array and size of the array
 * find the mean of the  element in the array
 * and return the mean value to the calling function
 *
 *
 *
 * @param test is an array input to this function
 * @param size is the length of the array which is input to the function
 *
 *mean value=sum of elements/number of elements
 * @return mean value value element of an array value which is integer is return value from this function
 */
float find_mean(unsigned char test[],int size);
/**
 * @This function accept an array and size of the array
 * find the median of the  element in the array
 * and return the mean value to the calling function
 *
 *
 *
 * @param test is an array input to this function
 * @param size is the length of the array which is input to the function
 * before calculating median the array is sorted in ascending order
 *median value= n/2 th term in odd function
 *median value=n/2-1 for even function
 * @return median value value element of an array value which is integer is return value from this function
 */
int find_median(unsigned char test[], int size);
/**
 * @This function accept an array and size of the array
 * sort the array in ascending order which is requred for finding the median of
 * array
 *
 *
 *
 * @param test is an array input to this function
 * @param size is the length of the array which is input to the function
 * before calculating median the array is sorted in ascending order

 * @return sorted array is the return value in this function
 */
int sort_array(unsigned char test[],int size);

/**
 * @This function accept an array only
 * it call all the previous functions and print all the necessary
 * stastical data in one go
 *
 *
 *
 *
 * @param test is an array input to this function


 * @return is void since it is used only for printing purpose
 */



void print_statistics(unsigned char test[]);

#endif /* STATS_H_ */
