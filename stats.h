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
 
 *
 * this code was made on purpose of the task given by the course introduction to embedded systems on week 1.
 *
 * @author Victor Kohl
 * @date 2/24/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* Size of the Data Set */
#define SIZE (40)
char sorted[SIZE]; // array for sorting in the function sort_array and to be called in other functions

void print_statistics(char array[SIZE]); //Prints The values of mean, maximum, minimum and median numbers of the original array.
void print_array(char array[SIZE]); //Prints both original array and Sorted array
int find_median(char array[SIZE]); //calculates the median of the array
int find_mean(char array[SIZE]); //calculates the mean of the array
int find_maximum(char array[SIZE]); //calculates the maximum number of the array
int find_minimum(char array[SIZE]);//calculates the minimum number of the array
void sort_array(char array[SIZE]);// sorts the original array from largest number to shortest


#endif /* __STATS_H__ */
