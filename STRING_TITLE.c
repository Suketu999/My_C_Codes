#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i=0,v=1;
char tc[9999];
printf("Enter the string:");
gets(tc);
while(tc[i]!='\0')
    {
    if (i==0 || tc[i-1]==' ')
        {
        if (tc[i]>='A' && tc[i]<='Z')
            v=v*1;
        else
            v=v*0;
        }
    else
        {
        if (tc[i]>='a' || tc[i]==' ' && tc[i]<='z' || tc[i]==' ')
            v=v*1;
        else
            v=v*0;
        }
    i++;
    }
if (v==1)
    printf("\nString is in Title Case.\n");
else if (v==0)
    printf("\nString is NOT in Title Case.\n");
}
