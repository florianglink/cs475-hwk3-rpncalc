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
        struct element* temp = s.top;
        
    }
}