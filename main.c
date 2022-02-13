/*
 ============================================================================
 Name        : PolishSol.c
 Author      : Florian Godfrey Link
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include "stack.h"
#include "polish.h"

#define MAX_EQ_LEN 100 /* maximum RPN expression input length */

int main()
{
	char eqn[MAX_EQ_LEN];	 // string to store the input RPN expression
	char resp[MAX_EQ_LEN]; // string to store the user's response "y" or "n"

	printf("\nEnter an equation in RPN:\n");
	while(resp[0] != 'n') {
		fgets(eqn, MAX_EQ_LEN, stdin);
		printf("%lf\n", evaluate(eqn));
		printf("Evaluate another? (y/n): ");
		fgets(resp, MAX_EQ_LEN, stdin);
	}
	return 0;
}
