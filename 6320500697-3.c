#include <stdio.h>
int main ()
{
    int n,m,i,k=1;
    scanf ("%d",&n);
    for (i=1; ;i++)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            if (i==1)
            {
               k++;
            }
            else
            {
                k++;
            }
        }
        if (k==n)
        {
            break;
        }
    }
    if (i%7==0||i%11==0||i%13==0)
    {
        i=i+1;
    }
    printf ("%d",i);
}
