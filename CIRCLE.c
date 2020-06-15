#include<stdio.h>
#include<math.h>
void main()
{
int x,y=0,i=0,n=0,a,r;
printf("Enter the radius of the cicle:");
scanf("%d",&r);
while (y<2*r)
    {
    x=((r-1)-sqrt((r*r)-((y-r)*(y-r))));
    while(i<x)
        {
        printf(" ");
        i++;
        }
    printf("*");
    a=2*sqrt((r*r)-((y-r)*(y-r)));
    while (n<a)
        {
        printf(" ");
        n++;
        }
    printf("*\n");
    y++;
    i=0;
    n=0;
    }
}
