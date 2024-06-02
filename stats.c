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
int row=8;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
printf("\nRaw Array =");
print_array(test,SIZE,row);
  
sort_array(test,SIZE);
printf("\nSorted Array=");
print_array(test,SIZE,row);

print_statistics(test,SIZE);

}

 void print_array(unsigned char test[],int size,int row)
 {
int r=0;
printf(" \n[");
 for(int loop = 0; loop < size; loop++)
 {
	r++;
     printf("%u", test[loop]);
	 if (loop!=size-1){printf(",");}else{printf("]");}
	if(r==row){printf("\n");r=0;}
 }
 }


void sort_array(unsigned char test[],int size)
{
	unsigned char a;
        for (int i = 0; i < size; ++i) 
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (test[i] < test[j]) 
                {
                    a =  test[i];
                    test[i] = test[j];
                    test[j] = a;
                }
            }
        }
}


 void print_statistics(unsigned char test[],int size)
 {
	printf("\n Minimum value in array = %d",min_array(test,size)); 
	printf("\n Maximum value in array = %d",max_array(test,size)); 
	printf("\n Mean value in array = %d",mean_array(test,size)); 
	printf("\n Median value in array = %d",median_array(test,size)); 
	printf("\n");
 }
 
 int min_array(unsigned char test[],int size)
 {
	 	unsigned char min=test[0];
        for (int i = 0; i < size; ++i) 
        {
		if(test[i]<min)
		{min=test[i];}
        }
		return min;
 }
 
 
  int max_array(unsigned char test[],int size)
 {
	 	unsigned char max=test[0];
        for (int i = 0; i < size; ++i) 
        {
		if(test[i]>max)
		{max=test[i];}
        }
		return max;
 }


  int mean_array(unsigned char test[],int size)
 {
	 	int mean=0;
        for (int i = 0; i < size; ++i) 
        {
		mean=mean+test[i];
        }
		mean=mean/size;
		return mean;
 }
 
 
 

   int median_array(unsigned char test[],int size)
 {
	 	int median=0;
		sort_array(test,SIZE);
		
		if((size%2)==0){median =(test[size/2]+test[(size/2)+1])/2;}
		else{median=test[size/2];}        
		return median;
 }




/* Add other Implementation File Code Here */
