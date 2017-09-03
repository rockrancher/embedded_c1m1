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
 * @date   3 Sept 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Global variables */

int i;              // common loop counter

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
 


  /* Print the initial array */

  printf("\nThis is the unsorted array:\n");
  print_array(test, SIZE);

  /* Sort the array (this permanently overwrites original) */
  /* NOTE: need to sort before calculating median */

  sort_array(test, SIZE);
  
  /* Print the min, max, mean and median values */

  print_statistics(test, SIZE);
  
  /* Finally, print the sorted array */

  printf("\nThis is the sorted array:\n");
  print_array(test, SIZE);
  printf("\n");


};






/* Define function find_minimum() */

unsigned char find_minimum(unsigned char *arr, int size){
  
  /* set first element as candidate for min */

  unsigned char min = arr[0];

  /* scan through array and replace if new min found */

  for(i = 1; i < size; i++){
    if(arr[i] < min){
      min = arr[i];
    };
  };

  /* return lowest value found */

  return min;

};



/* Define function find_maximum() */

unsigned char find_maximum(unsigned char *arr, int size){

  
  /* set first element as candidate for max */

  unsigned char max = arr[0];

  /* scan through array and replace if new max found */

  for(i = 1; i < size; i++){
    if(arr[i] > max){
      max = arr[i];
    };
  };

  /* return highest value found */

  return max;

};



/* Define function find_mean() */

unsigned char find_mean(unsigned char *arr, int size){

  /* set accumulator variable to zero */

  long sum = 0;

  /* scan through array and calculate sum */

  for(i = 0; i < size; i++){
    sum += arr[i];
  };

  /* return sum divided by number of elements */


  return sum / size;

};


/* Define function find_median() */

unsigned char find_median (unsigned char *arr, int size){

  /***********************************************************/	
  /* NOTE: array must be sorted before calling this function */
  /***********************************************************/

  unsigned char median;

  /* median is value with equal number of elements larger and smaller */
  /* center element for odd sized arrays */
  /* mean of two center elements for even sized arraye */

  /* check if array has odd or even number of elements */

  if(size % 2){

    /* array has odd number of elements */

     median = arr[ size / 2 ];

  } else {

    /* array has even number of elements */
    /* array of size 2 needs 0th and 1th elements */


    median = (arr[ (size / 2) - 1] + arr[ size / 2 ]) / 2;

  }

  return median;

};

/* Define function print_statistic() */

void print_statistics(unsigned char *arr, int size){

  /* print an printf statement for each statistical value */

  printf("\nThe minimum value in the array is %d", find_minimum(arr, size));

  printf("\nThe maximum value in the array is %d", find_maximum(arr, size));

  printf("\nThe mean value of the array is %d", find_mean(arr, size));

  printf("\nThe median value of the array is %d", find_median(arr, size));

  printf("\n\n");

};


/* Define function print_array() */

void print_array(unsigned char *arr, int size){

  /* print array in eight collumns, for lack of a more aesthetic process */

  for( i = 0; i < size; i++){

    /* print newline if i divisible by number of columns */

    if(( i % 8 ) == 0){
      printf("\n");
    }

    /* tab and print one element */

    printf("\t%d", arr[i]);

  };

  /* one more newline to keep it clean */

  printf("\n");

  return;


};

/* Define function sort_array() */

void sort_array(unsigned char *arr, int size){

  /* sort array into descending order using bubble sort */

  /* local variables */

  int unsorted;
  unsigned char tmp;

  do { 

    /* set flag to sorted, reset if any pair swapped */

    unsorted = 0;


    /* scan array checking adjacent elements */

    for( i = 1; i < size; i++){

      /* swap any pair not in descending order and reset flag */

      if( arr[ i - 1 ] < arr[i] ){

        unsorted = 1;
	tmp = arr[ i - 1 ];
	arr[ i - 1 ] = arr[i];
	arr[i] = tmp;

      };

    };

  } while(unsorted);


};                 // End of file stats.c



