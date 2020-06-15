#include<stdio.h>
#include<time.h>
int main()
{
float start[9],end[9],total[9],c[9]={0,0,0,0,0,0,0,0,0};
int i,n,k=1,a=1,b=0,d,e=0;
char L[9][99]={{"Empty"},{"Empty"},{"Empty"},{"Empty"},{"Empty"},{"Empty"},{"Empty"},{"Empty"},{"Empty"}},s;
printf("\nWelcome to the PopRank!\n");
printf("\nThe List:\n");
while (a<9)
    {
    b=0;
    printf("%d \t",a);
    while (b<9)
        {
        printf("%c",L[a][b]);
        b++;
        }
    printf("\t Popularity index:%f \n\n\n",c[a]);
    a++;
    }

while (k<9)
    {
    again:
    printf("\nEnter 0 to UPRANK; 1 to ADD and 2 to EXIT: ");
    scanf("%d",&i);
    if (i==2)
        break;
    else if (i==1)
        {
        start[k]=clock();
        printf("\nEnter length of text:");
        scanf("%d",&d);
        printf("\nEnter the text:");
        while(e<d)
            {
            s=getchar();
            L[1][e]=s;
            e++;
            }
        }
    else if (i==0)
        {
        printf("\nEnter the Number in The List to UPRANK:");
        scanf("%d",&n);
        end[n]=clock();
        total[n]=end[n]-start[n];
        c[n]=c[n]+1-(0.00001*total[n]);
        }
    else
        goto again;
    k++;
    }
a=0,b=0;
printf("\nThe List:\n");
while (a<9)
    {
    b=0;
    printf("%d \t",a);
    while (b<9)
        {
        printf("%c",L[a][b]);
        b++;
        }
    printf("\t Popularity index:%f \n\n\n",c[a]);
    a++;
    }
}
