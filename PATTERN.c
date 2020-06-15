#include <stdio.h>
void main()
{
int a,b,m,n,i;
printf("Enter number of rows:");
scanf("%d",&a);
i=1;
while (i<=a)
    {
    m=0;
    while (m<=(a-i))
        {
        printf(" ");
        m++;
        }
    n=1;
    while (n<=i)
        {
        printf("%d",n);
        n++;
        }
    n=n-2;
    while (n!=0)
        {
        printf("%d",n);
        n--;
        }
    i++;
    printf("\n");
    }
}
