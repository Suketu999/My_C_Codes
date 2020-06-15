#include <stdio.h>
void main()
{
int a,n,r,t,x,y,z,i;
printf("Enter the number of combination(rows-1):");
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
        while (n>=i)
            {
            x=x*i;
            i=i+1;
            }
        i=1;
        y=1;
        if (n==r)
                y=1;
        else
            while ((n-r)>=i)
                y=y*i;
                i=i+1;

        i=1;
        z=1;
        if (r==0)
                z=1;
        else
            while (r>=i)
                z=r*i;
                i=i+1;

        t=(x/(y*z));
        printf("%d\t",t);
        r=r+1;
        }
    printf("\n");
    n=n+1;
    }
}
