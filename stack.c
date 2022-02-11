#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"

/**
 * Initializes an empty stack
 * @param s an uninitialized Stack struct
 * @return an initialized Stack struct
 */
Stack initStack(Stack s)
{
    s.top = NULL;
}

/**
 * Puts a new element on the top of a stack
 * @param num the number to be held by the element
 * @param s the stack that the element is being pushed onto
 */
void push(double num, Stack s)
{
    Element* element = (struct Element*)malloc(sizeof(Element));
    element->data = num;
    if(s.top == NULL) {
        s.top = element;
    }
    else {
        element->next = s.top;
        s.top = element;
    }
}

/**
 * Removes an element from the top of the stack and returns it
 * @param s the stack that the item is being popped off of
 * @return the value of the element that was popped
 */
double pop(Stack s)
{
    if(s.top != NULL){
        double val = s.top->data;
        struct Element* temp = s.top;
        s.top = s.top->next;
        free(temp);
        return val;
    }
    else {
        printf("Stack is empty\n");
    }
}

/**
 * Recursively calculates the total number of elements on the given stack
 * @param e the top element of the stack
 * @return the number of elements currently on the stack
 */
int size(Element* e)
{
    if(e == NULL) {
        return 0;
    }
    else {
        return 1+size(e->next);
    }
}