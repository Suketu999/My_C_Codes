#include <stdio.h>
#include <math.h>
void main()
{
int x,n;
printf("This program helps you to determine the combination of minimum notes of 100, 50, 10, 5, 2, 1 rupees.");
printf("\n Enter the amount:");
scanf("%d",&n);
x=n/100;
n=n%100;
printf("\nThe number of 100 rupee notes is:%d",x);
x=n/50;
n=n%50;
printf("\nThe number of 50 rupee notes is:%d",x);
x=n/10;
n=n%10;
printf("\nThe number of 10 rupee notes is:%d",x);
x=n/5;
n=n%5;
printf("\nThe number of 5 rupee notes is:%d",x);
x=n/2;
n=n%2;
printf("\nThe number of 2 rupee notes is:%d",x);
printf("\nThe number of 1 rupee notes is:%d",n);
}
