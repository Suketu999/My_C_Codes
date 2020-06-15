#include<stdio.h>
#include<windows.h>
void main()
{
int a,i=0,n;
while(1)
    {
    printf("\n\nThe current floor is: %d",i);
    printf("\nEnter the number of floor you want to go:");
    scanf("%d",&a);
    n=a-i;
    if(n<0)
        printf("\nGoing down by %d floors.",-n);
    else
        printf("\nGoing up by %d floors.",n);
    while(i!=a)
        {
        if(a-i<0)
            i--;
        else
            i++;
        }
    Beep(1000,500);
    printf("\nFloor has arrived.");
    Beep(1000,500);
    }
}
