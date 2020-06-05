#ifndef EXPRESSION_H
#define EXPRESSION_H

struct Number
{
    enum { INTEGER, FLOAT, IDENT, STRING } type;
    union
    {
        float fval;
        int   ival;
	char *name;
    };
};

typedef struct {
  int *array;
  size_t used;
  size_t size;
} Array;


//--------------------- Dynamic Array for keeping info (Variable names , data, etc -----------------


void initArray(Array *a, size_t initialSize) ;

void insertArray(Array *a, int element) ;
 
void freeArray(Array *a) ;

//---------------------------------- Expressions functions --------------------------------

struct Number add_calc (struct Number num1 , struct Number num2);
void print ( struct Number num);

#endif

