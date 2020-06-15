#include<stdio.h>
void main()
{
int i=2,n,a,b=1,c,d=0;
printf("Enter the upper limit of number:");
scanf("%d",&a);
while(i<a)
    {
    n=2;
    b=1;
    while(n<=(i/2))
        {
        c=i%n;
        if (c==0)
            {b=b*0;
            break;}
        else
            n++;
        }
    i++;
    if (b==1)
        {printf("%d\t",i-1);
        d++;}
    }
printf("\n\nNumber of prime numbers in range is:%d",d);

}
