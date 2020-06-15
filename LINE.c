#include<stdio.h>
#include<math.h>
void main()
{
int y=0,x,m,c,i=0,n;
printf("Enter m and c(0<c<10) resp. for y=mx+c:\n");
scanf("%d%d",&m,&c);
while(y<20)
    {
    if (y==10)
        printf("____________________");
    else
    {
    printf("|");
    while(i<(10-y-c)/m)
        {
        printf(" ");
        i++;
        }
    printf(".\n");}
    i=0;
    y++;
    }
}
