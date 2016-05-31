#include<stdio.h>
#include "func1.h"

void spiralPrint(int m, int n, int a[n][n])
{

    int i, k = 0, l = 0,j;

    int t[100];



    /*  k - starting row index

        m - ending row index

        l - starting column index

        n - ending column index

        i - iterator

    */

    j=0;

    while (k < m && l < n)

    {

        /* Print the first row from the remaining rows */

        for (i = l; i < n; ++i)

        {

           t[j]=a[k][i];

           j++;

        }

        k++;



        /* Print the last column from the remaining columns */

        for (i = k; i < m; ++i)

        {

            t[j]=a[i][n-1];

            j++;

        }

        n--;



        /* Print the last row from the remaining rows */

        if ( k < m)

        {

            for (i = n-1; i >= l; --i)

            {

                t[j]=a[m-1][i];

                j++;

            }

            m--;

        }



        /* Print the first column from the remaining columns */

        if (l < n)

        {

            for (i = m-1; i >= k; --i)

            {

                t[j]= a[i][l];

                j++;

            }

            l++;

        }

    }



printf("\nThe reverse spiral of the given matrix is : \n") ;

    for(i=j-1;i>=0;i--)

    {

    	printf("%d ",t[i]);

	}

printf("\n");

}
