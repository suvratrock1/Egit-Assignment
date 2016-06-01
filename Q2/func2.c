#include <stdio.h>
#include <stdbool.h>

#include "func2.h"


bool match(char *first, char *second)
{

    if (*first == '\0' && *second == '\0')
        return true;


    if (*first == '*' && *(first+1) != '\0' && *second == '\0')
        return false;

    if (*first == '?' || *first == *second)
        return match(first+1, second+1);


    if (*first == '*')
        return match(first+1, second) || match(first, second+1);
    return false;
}


void test(char *first, char *second)
{  match(first, second)? puts("They Match"): puts("They Don't Match"); }
