#include<stdio.h>
#include<time.h>
void main()
{
float start[9],end[9],total[9],c[9]={0,0,0,0,0,0,0,0,0};
int i,n,k=1,a=1,b=0;
char L[9][9];
printf("Welcome to the PopRank!\n");
while (1)
    {
    again:
    printf("Enter 0 to UPRANK; 1 to ADD and 2 to EXIT: ");
    scanf("%d",i);
    if (i==2)
        break;
    else if (i==1)
        {
        start[k]=clock();
        printf("Enter any text:");
        gets(L[k][9]);
        }
    else if (i==0)
        {
        printf("Enter the Number in The List to UPRANK:");
        scanf("%d",&n);
        c[n]=c[n]+1;
        }
    else
        goto again;
    }
printf("The List:\n");
while (a<9)
    {
    b=0;
    printf("'%d'",a);
    while (b<9)
        {
        printf("%c",L[a][b]);
        b++;
        }
    a++;
    }
}
