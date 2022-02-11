/*
 * stack.h
 *
 *  Created on: Jun 25, 2015
 *      Author: dchiu
 */

#ifndef STACK_H_
#define STACK_H_

//element struct for individual nodes on the stack
typedef struct{
    double data;
    struct Element* next;
} Element;

//stack struct
typedef struct{
    struct Element* top;
} Stack;

//function declarations
int size();
void push(double num, Stack s);
double pop(Stack s);

#endif /* STACK_H_ */
