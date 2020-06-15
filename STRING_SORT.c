#include<stdio.h>
int main()
{
int i,n=0,a=0,b=0,c=0;
printf("Enter number of strings:");
scanf("%d",&i);
char str[i][10],tmp[10];
printf("Enter the strings now:\n");
while(n<i)
    {
    scanf("%s",str[n]);
    n++;
    }
n=0;
while(a<=i)
    {
    n=0;
    while(n<=(i-2))
        {
        b=0;
        check:
        if (str[n][b]>str[n+1][b])
            {
            c=0;
            while(c<10)
                {
                tmp[c]=str[n][c];
                str[n][c]=str[n+1][c];
                str[n+1][c]=tmp[c];
                c++;
                }
            }
        else if(str[n][b]==str[n+1][b])
            {
            b++;
            goto check;
            }
        n++;
        }
    a++;
    }
n=0;
printf("\nSorted strings:\n");
while(n<i)
    {
    printf("%s\n",str[n]);
    n++;
    }
}

