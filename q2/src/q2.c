#include<stdio.h>
#include<stdbool.h>

#include "func2.h"

// Driver program to test above functions
int main()
{
    char a[20],b[20];

    printf("Enter the first string : ");
    scanf("%s",a);
    printf("Enter the second string : ");
    scanf("%s",b);

    test(a,b);

    return 0;
}
