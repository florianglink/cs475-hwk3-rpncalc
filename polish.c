#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "polish.h"

/**
 * Takes an RPN expression string as input and evaluates it
 * @param exp the expression to be evaluated
 * @return the value of the expression
 */
double evaluate(const char exp[])
{
    Stack st;
    initStack(st);
    char * token = strtok(exp, " \n\t");
    while(token != NULL) {
        if(atoi(token) != 0) {
            push(atoi(token), st);
        }
        else {
            if(size(st.top) < 2) {
                printf("Error: insufficient operands.\n");
                break;
            }
            else {
                if(token == '+' || token == '-' || token == '*' || token == '/') {
                    double num1 = pop(st);
                    double num2 = pop(st);
                    if(token == '+') {
                        push(num1+num2, st);
                    }
                    else if(token == '*') {
                        push(num1*num2, st);
                    }
                    else if(token == '/') {
                        if(num1 == 0) {
                            printf("Error: divide by zero.\n");
                            break;
                        }
                        else {
                            push(num2/num1, st);
                        }
                    }
                    else {
                        push(num2-num1, st);
                    }
                }
                else {
                    printf("Error: unrecognized operator\n");
                    break;
                }
            }

        }
        token = strtok(NULL, exp);
    }
    if(size(st.top)>1) {
        printf("Error: too many operands.\n");      
    }
    else {
        return pop(st);
    }
}