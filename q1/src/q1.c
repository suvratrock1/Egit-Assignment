#include <stdio.h>
#include "func1.h"

/* Driver program to test above functions */
int main()
{

int n=1,q,c,d;
//Hello

	printf("Enter the order of the matrix : ");
    scanf("%d",&n);

int	a[n][n];
    printf("Enter the elements of  matrix\n");

   for (c = 0; c < n; c++)
      for (d = 0; d < n; d++)

         scanf("%d", &a[c][d]);
         printf("\nThe elements in the matrix are: \n") ;
for(c = 0 ; c < n ; c++)
{
  for(d = 0 ; d < n ; d++){
    printf("%d ", a[c][d]) ;
  }
  printf("\n");
}

    spiralPrint(n, n, a);
    return 0;
}
