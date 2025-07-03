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
 * @file stats.h 
 * @brief statistics functions
 *
 * stats functions used to analyze an array of unsiged char data items.
 * functions help with reporting the maximum, minimum, mean, and median
 * of the data set with the help of sorting function to help rearrange
 * the data set in ordered arrangement.
 *
 *
 * @author Vinh Ngo 
 * @date 7/2/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**************************************************
 * Function : print_statistics
 * Description: 
 * 	This function takes an array of unsigned char items
 * 	and display the statistics of the array including
 * 	min,max, mean, and meadian
 * Parameters:
 * 	unsigned char * Ptr: Pointer to the array
 * 	int n: size of the array
 *
 * Return:
 * 	none
**************************************************/
void print_statistics(unsigned char * ptr, int n);


/**************************************************
 * Function : find_median
 * Description:
 * 	This function takes an array of data and
 * 	a length and returns the median value
 * Parameters:
 * 	unsigned char * Ptr: Pointer to the array
 * 	int n: length of the array
 * Return:
 * 	median value of the array	
**************************************************/
double find_median(unsigned char * ptr, int n);


/**************************************************
 * Function: find_mean
 * Description:
 * 	This functions takes an arrya of data
 * 	and a length, returns the mean
 * Parameters:
 * 	unsigned char * ptr: Pointer to the array
 * 	int n: length of the array
 * Return:
 * 	mean of the aray 
**************************************************/
double find_mean(unsigned char * ptr, int n);



/**************************************************
 * Function: find_maximum
 * Description:
 * 	This function takes an array of data
 * 	and a length. The function returns 
 * 	the maximum value of the data
 * Parameters:
 * 	unsigned char * ptr: Pointer to the array
 * 	int n: lenghth of the array
 * Return:
 * 	maximum value of an item in the array
**************************************************/
unsigned char find_maxium(unsigned char * ptr, int n);



/**************************************************
 * Function: find_minimum
 * Description:
 * 	This function takes an array of data
 * 	and a length. The function returns 
 * 	the minimum value of the data
 * Parameters:
 * 	unsigned char * ptr: Pointer to the array
 * 	int n: lenghth of the array
 * Return:
 * 	minimum value of an item in the array
**************************************************/
unsigned char find_minimum(unsigned char * ptr, int n);


/**************************************************
 * Function: sort_array
 * Description:
 * 	This function takes an array of adat and a length.
 * 	sorts the array from larest to smallest.
 * 	(Ascending order)
 * Parameters:
 * 	unsigned char * ptr: Pointer to the array
 * 	int n: length of the array
 * Return:
 * 	None
**************************************************/
void sort_array(unsigned char * ptr, int n);

#endif /* __STATS_H__ */

