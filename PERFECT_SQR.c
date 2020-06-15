#include<stdio.h>
void main()
{
int i=1, j=1, a=0, s=0, n;
printf("Enter the number:");
scanf("%d",&n);
while(s<=n)
    {
    s=s+i;
    i=i+2;
    if(s==n)
        {
        printf("The number is a perfect square.");
        printf("\n%d = %d * %d",n,j,j);
        a=1;
        break;
        }
    j++;
    }
if (a==0)
    printf("The number is not a perfect square.");
}
