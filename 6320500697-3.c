#include <stdio.h>
int main ()
{
    int n,m,i,k=1;
    scanf ("%d",&n);
    for (i=1; ;i++)
    {
        if(i%2==0&&i%3==0||i%2==0&&i%5==0||i%3==0&&i%5==0||i%3==0)
        {
            k++;
        }
        if (k==n)
        {
            break;
        }
    }
    printf ("%d",i);
}
