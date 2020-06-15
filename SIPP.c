#include<stdio.h>
void main()
{
int i=0,n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d\t",n);
while (n!=1)
    {
    if (n%2==0)
        n=n/2;
    else
        n=3*n+1;
    printf("%d\t",n);
    i++;
    }
printf("\n\n%d",i+1);
}
