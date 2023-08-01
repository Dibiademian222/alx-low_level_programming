#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


void myStartupFun(void) __attribute__((constructor));
/**
* myStartupFun - prints a sentence before the main
* function is executed
*/
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
