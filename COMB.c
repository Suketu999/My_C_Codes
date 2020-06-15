#include <stdio.h>
int main()
{
int x,y,n,r;
printf("Enter number of rows:");
scanf("%d",&x);
n=0;
while (n<=x)
{
    r=0;
    while (n>=r)
        {
        y=c(n,r);
        printf("%d\t",y);
        r=r+1;
        }
    printf("\n");
    n=n+1;
}

int c(int e,int d)
{
int a,b;
c(a,b)=(fact(a)/(fact(b)*fact(a-b)));
return(c);
}

int fact(int a)
{
int b,c,d;
c=b-1;
while (c>=1)
    {
    d=b*c;
    c=c-1;
    }
return(d);
}
