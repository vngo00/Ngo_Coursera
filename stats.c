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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char * ptr, int n) {
	sort_array(ptr, n);
	printf("median: %f\n", find_median(ptr, n));
	printf("mean: %f\n", find_mean(ptr,n));
	printf("max: %d\n", find_maximum(ptr,n));
	printf("min: %d\n", find_minimum(ptr,n));
	print_array(ptr,n);

}

void sort_array(unsigned char * ptr, int n) {
	int i;
	for (i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ptr[j] < ptr[i]) {
				unsigned char temp = ptr[i];
				ptr[i] = ptr[j];
			        ptr[j] = temp;
			}
		} 
	}
}	

void print_array(const unsigned char * ptr, int n) {
	int i = 0;
	while (i < n) {
		printf("%d ", ptr[i]);
		i++;
	}
	printf("\n");
}




unsigned char find_minimum(const unsigned char * ptr, int n) {
	unsigned char min = ptr[0];

	int i = 1;
	
	while (i < n) {
		if (min > ptr[i]) {
			min = ptr[i];
		}
		i++;
	}
	return min;
}

unsigned char find_maximum(const unsigned char * ptr, int n) {
	unsigned char max = ptr[0];

	int i = 1;
	while ( i < n) {
		if ( max < ptr[i] ) {
			max = ptr[i];
		}
		i++;
	}
	return max;
}


double find_mean(const unsigned char * ptr, int n) {
	unsigned int sum = 0;
	int i = 0;
	while (i < n) {
		sum += ptr[i];
		i++;
	}

	return (double) sum / n;
}

double find_median(unsigned char * ptr, int n) {
	sort_array(ptr, n);

	if (!(n % 2)) {
		return (double) (ptr[n/ 2 -1] + ptr[n / 2]) / (double) 2;
	}
	return (double) ptr[n/2];
}
