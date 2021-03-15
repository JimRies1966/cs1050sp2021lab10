/*
 * CS1050
 * Spring 2021
 * Lab 10
 */

// Includes (note - do you need more?)
#include <stdio.h>

// Symbolic Constants
#define CLEARTEXT \
"It's Christmastime in Washington\a\nThe Democrats rehearsed \b\n"\
"Gettin' into gear for four more years\nThings not gettin' worse"\
"\"\\\?\n\n\t\t- Steve Earle"

int main(void)
{
    char sOriginal[]=CLEARTEXT;

    printf("**** Original ****\n");
    printf("%s\n",sOriginal);
}
