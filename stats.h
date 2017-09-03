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
 * @brief Header file for ./stats.c
 *
 * Contains function declarations and descriptions for functions used to 
 * calculate simple statistical parameters on small 1D data array
 *
 * @author Thom Wescott
 * @date 2 Sept 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief Returns minimum value in array
 *
 * Takes pointer to and size of array and returns
 * minimum value found in array
 *
 * @param *arr       Pointer to beginning of array
 * @param size       Number of elements in array
 *
 * @return unsigned char
 */

unsigned char find_minimum(unsigned char *arr, int size);

	
/**
 * @brief Returs maximum value in array
 *
 * Takes pointer to and size of array and returns
 * maximum value found in array
 *
 * @param *arr       Pointer to beggining of array
 * @param size       Number of elements in array
 *
 * @return unsigned char
 */

unsigned char find_maximum(unsigned char *arr, int size);


/**
 * @brief Retirms mean value in array
 *
 * Takes pointer to and size of array and returns
 * mean value of elements of array
 *
 * @param *arr       Pointer to beginning of array
 * @param size       Number of elements in array
 * 
 *
 * @return unsigned char
 */

unsigned char find_mean(unsigned char *arr, int size);


/**
 * @brief Returns median value of array
 *
 * Takes pointer to and size of array and returns
 * value at middle of sorted array
 *
 * @param *arr       Pointer to beginning of array
 * @param size       Number of elements in array
 *
 * @return unsigned char
 */

unsigned char find_median (unsigned char *arr, int size);


/**
 * @brief Prints formatted statistics of array 
 *
 * Takes pointer to and size of array and prints 
 * minimum, mazimum, mean and median values in
 * formatted text statements
 *
 * @param *arr        Pointer to beginning of array
 * @param size        Number of elements in array
 *
 * @return void 
 */

void print_statistics(unsigned char *arr, int size);


/**
 * @brief Prints formatted array
 *
 * Takes pointer to and size of array and prints 
 * contents of array as formatted table
 *
 * @param *arr        Pointer to beginning of array
 * @param size        Number of elements in array
 * @param <Add InputName> <add description here>
 *
 * @return void
 */

void print_array(unsigned char *arr, int size);


/**
 * @brief Sorts referenced array
 *
 * Takes pointer to and size of array and sorts
 * it returning void, leaving original pointer to 
 * newly sorted array
 *
 * @param *arr         Pointer to beginning of array
 * @param size         Number of elements in array
 *
 * @return void
 */

void sort_array(unsigned char *arr, int size);



#endif /* __STATS_H__ */
