#include<stdio.h>
void main()
{
int o=1;
float t,p;
printf("Enter percentage of motor max speed:");
scanf("%f",&p);
t=100/p;
printf("On time: 1sec\n");
printf("Off time: %fsec",t-1);
}
