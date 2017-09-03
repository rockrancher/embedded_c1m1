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
 * @file stats.c
 * @brief Calculates and prints basic statistic paramaters of included data
 *
 * Calculate min, max, mean and median of included data array, as well as 
 * sort and print formatted statements of results
 *
 * @author Thom Wescott
 * @date 2 Sept 2017
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
 


  /* Print the initial array */

  print_array(test, SIZE){
	  
    };

  /* Print the min, max, mean and median values */

  print_statistics(test, SIZE){
	  
    };

  /* Sort the array (this permanently overwrites original) */
  /* Then print the sorted array */

  sort_array(test, SIZE){

    };

  print_array(test, SIZE){

    };

};






/* Define function find_minimum() */

unsigned char find_minimum(unsigned char *arr, int size){

};


/* Define function find_maximum() */

unsigned char find_maximum(unsigned char *arr, int size){

};

/* Define function find_mean() */

unsigned char find_mean(unsigned char *arr, int size){

};


/* Define function find_median() */

unsigned char find_median (unsigned char *arr, int size){

};

/* Define function print_statistic() */

void print_statistics(unsigned char *arr, int size){

};


/* Define function print_array() */

void print_array(unsigned char *arr, int size){

};

/* Define function sort_array() */

void sort_array(unsigned char *arr, int size){

};



