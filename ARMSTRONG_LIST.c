#include <stdio.h>
void main()
{
int a,b,c=0,n=1;
while (n<=100000000000000)
    {
    a=n;
    c=0;
    while (a!=0)
        {
        b=a%10;
        a=a/10;
        c=c+(b*b*b);
        }
    if (n==c)
        printf("%d\t",n);
    ++n;
    }
}
