#include <stdio.h>
int main ()
{
    int i,k,n,j,d;
    scanf ("%d",&n);

    if (n%2==0)
    {
        j=n/2;
        j=j-1;
        for (i=0;i<n;i++)
        {
            for (k=0;k<n-1;k++)
            {
                 if(i==0||i==n-1)
                {
                    if (k==j)
                    {
                        printf ("*");
                    }
                    else
                    {
                        printf ("_");
                    }
                }
                else
                {
                     printf ("_");
                }
            }
             printf ("\n");
        }
    }
    else
    {
        d=n-1;
        j=d/2;
        for (i=0;i<n;i++)
        {
            for (k=0;k<n;k++)
            {
                if(i==0||i==n-1)
                {
                    if (k==j)
                    {
                        printf ("*");
                    }
                    else
                    {
                        printf ("_");
                    }
                }
                else
                {
                     printf ("_");
                }
            }
            printf ("\n");
        }
    }
}
