#include <stdio.h>
int main()
{
int a=0,b=0,c=0,d=0,v,n;
printf("Enter total number of voters:");
scanf("%d",&n);
while (a+b+c+d<n)
    {
    printf("\n\nName\t\tNumber\nBJP\t\t1\nCong.\t\t2\nAAP\t\t3\nNOTA\t\t4\nEnter the number corresponding to the party name:");
    scanf("%d",&v);
    if (v==1)
        a=a+1;
    else if (v==2)
        b=b+1;
    else if (v==3)
        c=c+1;
    else
        d=d+1;
    }
printf("\n\nResults:\nName\t\tNo. of votes\nBJP\t\t%d\nCong.\t\t%d\nAAP\t\t%d\nNOTA\t\t%d",a,b,c,d);
}
