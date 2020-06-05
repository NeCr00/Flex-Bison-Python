#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "expression.h"



void initArray(Array *a, size_t initialSize) {
  a->array = (int *)malloc(initialSize * sizeof(int));
  a->used = 0;
  a->size = initialSize;
}

void insertArray(Array *a, int element) {
  // a->used is the number of used entries, because a->array[a->used++] updates a->used only *after* the array has been accessed.
  // Therefore a->used can go up to a->size 
  if (a->used == a->size) {
    a->size *= 2;
    a->array = (int *)realloc(a->array, a->size * sizeof(int));
  }
  a->array[a->used++] = element;
}

void freeArray(Array *a) {
  free(a->array);
  a->array = NULL;
  a->used = a->size = 0;
} 

struct Number add_calc (struct Number num1 , struct Number num2)
{ 
	float temp;
	printf("\n\n\n");
	if ( num1.type != num2.type){

		if(num1.type == INTEGER && num2.type == FLOAT){
			num2.fval = (float)num1.ival + num2.fval;
			return num2;	}

		else if(num2.type == INTEGER && num1.type == FLOAT){
			num1.fval = (float)num2.ival + num1.fval; 
			return num1;	}
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}
												}
								
		
	else {
		if(num1.type == INTEGER){
			num1.ival = num1.ival + num2.ival;
			return num1;
						}
		if(num1.type == FLOAT){
			num1.fval = num1.fval + num2.fval;	
			return num1;		}
								}
}


void print ( struct Number num){
	
	if(num.type == INTEGER)
		printf("%d\n",num.ival);
	
	else if (num.type == FLOAT)
		printf("%f\n",num.fval);

}