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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief  This Function prints an array on screen
 *
 * This Function prints an array on screen
 *
 * @param  - Array which needs to be printed
 *@param  - Size of Array 
 * @return 
 */
 void print_array(unsigned char test[],int size,int row);

/**
 * @brief  This Function prints all mean, median ,max, and min values of an array on screen
 *
 * This Function prints all mean, median ,max, and min values of an array on screen
 *
 * @param  - Array which needs to be sorted 
 *@param  - Size of Array 
 * @return 
 */
 void print_statistics(unsigned char test[],int size);


/**
 * @brief  This Function sort the array elements in an ascending order
 *
 * This function uses two if loops to go thorugh the array elements and sort them in an ascending order.
 *
 * @param raw_array - Array which needs to be sorted 
 *@param  - Size of Array 
 * @return - returns sorted array
 */
void sort_array(unsigned char test[],int size);

/**
 * @brief  This Function finds the minimum value in an array
 *
 * This function uses single if loop to find the minimum value in an array
 *
 * @param raw_array - Array from which min value needs to be found
 *@param  - Size of Array 
 * @return - minimum value
 */
int min_array(unsigned char test[],int size);


/**
 * @brief  This Function finds the maximum value in an array
 *
 * This function uses single if loop to find the maximum value in an array
 *
 * @param raw_array - Array from which max value needs to be found
 *@param  - Size of Array 
 * @return - maximum value
 */
int max_array(unsigned char test[],int size);


/**
 * @brief  This Function finds the mean value of array
 *
 * This function uses single if loop to find the mean value of array
 *
 * @param raw_array - Array from which mean value needs to be found
 *@param  - Size of Array 
 * @return - mean value
 */
int mean_array(unsigned char test[],int size);


/**
 * @brief  This Function finds the median value of array
 *
 * This function uses sort array function to find the median value of array
 *
 * @param raw_array - Array from which median value needs to be found
 *@param  - Size of Array 
 * @return - median value
 */
int median_array(unsigned char test[],int size);






#endif /* __STATS_H__ */
