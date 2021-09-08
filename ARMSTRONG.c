#include <stdio.h>
void main()
{
int a,b,c=0,n;
printf("Enter a number:");
scanf("%d",&a);
n=a;
while (b!=0)
    {
    b=a%10;
    a=a/10;
    c=c+(b*b*b);
    }
if (n==c)
    printf("The number is an Angstorm number.");
else
    printf("The number is not an Angstorm number.");
return
}
