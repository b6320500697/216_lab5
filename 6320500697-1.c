#include <stdio.h>
#
int main ()
{
    int n,i,j,k;
    scanf ("%d",&n);
    int a[15]={0};
    char win[n];
    char *p;
    scanf (" %[6\n]s",win);
    p = strtok(win," ");
    j=0;
    do
    {
        if(!(strcmp(p,"+")))
        {
            a[j-2]+=a[j-1];
            j--;
        }

    }while(p != NULL );
    printf ("%d",a[0]);

}
