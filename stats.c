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

#include <stdio.h>
#include "stats.h"

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test);
  print_statistics(test);

  return 0;
}

void print_statistics(char array[SIZE]){
	int minimum, maximum, mean, median;
	char Temp_array[SIZE];
	int j = 0;

	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}

	minimum = find_minimum(Temp_array);
	maximum = find_maximum(Temp_array);
	mean = find_mean(Temp_array);
	median = find_median(Temp_array);

	printf("Minimum number found: %d\n", minimum);
	printf("Maximum number found: %d\n",maximum);
	printf("Mean of all numbers: %d\n",mean);
	printf("Median of all numbers: %d\n",median);
}
void print_array(char array[SIZE]){

	char Temp_array[SIZE];
	int j = 0, i = 0;
	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}
	printf("Array Data is given bellow: \n");
	for(i = 0; i < SIZE; i++){
		printf("%d ",Temp_array[i]);
	}
	printf("\n");
	printf("\n");
	sort_array(Temp_array);

	printf("The sorted Array Data is given bellow: \n");
	for(i = 0; i < SIZE; i++){
		printf("%d ",sorted[i]);
	}
	printf("\n");
	printf("\n");
}

int find_median(char array[SIZE]){

	int median;

	median = (sorted[18]+sorted[19])/2;

	return median;
}

int find_mean(char array[SIZE]){

	int i = 0;
	int sum, mean;
	char Temp_array[SIZE];
	int j = 0;

	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}

		while(i < SIZE){
			sum = sum + Temp_array[i];
			i++;
		}

		mean = sum/SIZE;

		return mean;
}

int find_maximum(char array[SIZE]){

	int max = array[0], i = 0;
	char Temp_array[SIZE];
	int j = 0;

	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}

	while(i < SIZE){
		if (max < array[i])
		{
			max = array[i];
		}
		i++;
	}

	return max;
}

int find_minimum(char array[SIZE]){

	int i = 0, min = array[0];
	char Temp_array[SIZE];
	int j = 0;

	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}

	while(i < SIZE){
		if (min > Temp_array[i])
		{
			min = Temp_array[i];
		}
		i++;
	}	

	return min;
}

void sort_array(char array[SIZE]){

	int temp = 0, done = 0, i, flag;
	char Temp_array[SIZE];
	int j = 0;

	while(j< SIZE){
		Temp_array[j] = array[j];
		j++;
	}

	while(done == 0){
		flag = 1;
		i = 0;
		while(i < (SIZE - 1)){
			i++;
			if(Temp_array[i] > Temp_array[i-1]){
				flag = 0;
				temp = Temp_array[i];
				Temp_array[i] = Temp_array[i-1];
				Temp_array[i-1] = temp;
			}
		}
		if(flag == 1) done = 1;
	}

	i = 0;

	while(i < SIZE){
		sorted[i] = Temp_array[i];
		i++;
	}
}