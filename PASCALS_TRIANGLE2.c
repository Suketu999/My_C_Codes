#include <stdio.h>
int main()
{
int x,y,z,a,n,r,i,t;
printf("Enter number of rows:");
scanf("%d",&a);
printf("1\n");
n=1;
while (n<=a)
    {
    r=0;
    while (r<=n)
        {
        i=1;
        x=1;
        while (i<=n)
            {
            x=x*i;
            i=i+1;
            }
        if (r==0)
            y=1;
        else
            {i=1;
            y=1;
            while (i<=r)
                {
                y=y*i;
                i=i+1;
                }}
        if (n==r)
            z=1;
        else
            {i=1;
            z=1;
            while (i<=(n-r))
                {
                z=z*i;
                i=i+1;
                }}
        t=x/(y*z);
        printf("%d\t",t);
        r=r+1;
        }
    n=n+1;
    printf("\n");
    }
}
