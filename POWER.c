#include<stdio.h>
#include<math.h>
int pw(int x, int y);
void main()
{
float x,y,a;
printf("Enter the base:");
scanf("%f",&x);
printf("Enter the index:");
scanf("%f",&y);
if (y>0)
    a=pw(x,y);
else if (y<0)
    a=pw(x,y)^(-1);
//else if (y%1==0)
  //  a=;
printf("%f",a);
}
int pw(int x, int y)
{
if (y==0)
    return 1;
else if (y==1)
    return x;
else
    return x*pw(x,y-1);
}
