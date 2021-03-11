#include <stdio.h>
int main ()
{
    int i,k,n;
    scanf ("%d",&n);
    if (n%2==0)
    {
        for (i=0;i<n;i++)
        {
            for (k=0;k<n-1;k++)
            {
                printf ("_");
            }
             printf ("\n");
        }
    }
    else
    {
        for (i=0;i<n;i++)
        {
            for (k=0;k<n;k++)
            {
                printf ("_");
            }
            printf ("\n");
        }
    }
}
