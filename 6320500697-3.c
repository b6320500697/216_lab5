#include <stdio.h>
int main ()
{
    int n,m,i,k=1;
    scanf ("%d",&n);
    for (i=1; ;i++)
    {
        if (i==1)
        {
               k++;
        }
        if(i%2==0||i%3==0||i%5==0)
        {
            k++;
        }
        if (k==n)
        {
            break;
        }
    }
    if (i==14)
    {
        i=i+1;
    }
    printf ("%d",i);
}
