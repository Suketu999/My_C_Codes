#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
void main()
{
float t,e,s;
int i=0,x,y,X=0,Y=0,m,r,a=0,b=0,A=0,B=0;
printf("For the source mass\n");
printf("Enter x coordinate:");
scanf("%d",&x);
printf("Enter y coordinate:");
scanf("%d",&y);
printf("Enter mass:");
scanf("%d",&m);
label:
while(i<=100)
    {
    printf("\n");
    i++;
    }
i=0;//clear screen
printf(".");
while(a<=2*x)
    {
    printf(" ");
    while(b<=y)
        {
        printf("\n");
        b++;
        }
    a++;
    }
a=0;
b=0;
printf("0");
t=clock();
r=(((x-X)*(x-X))+((y-Y)*(y-Y)));
s=r/m;
while(1)
    {
    measure:
    e=clock();
    if(e-t>=s)
        break;
    else
        goto measure;
    }
while(i<=100)
    {
    printf("\n");
    i++;
    }
i=0;//clear screen
X++;
Y++;
while(A<=2*X)
    {
    printf(" ");
    while(B<=Y)
        {
        printf("\n");
        B++;
        }
    A++;
    }
A=0;
B=0;
printf(".");
goto label;
}
