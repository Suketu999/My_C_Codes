#include <stdio.h>
int main()
{
int n,r=2,d=1;
printf("Enter value of n:");
scanf("%d",&n);
while (r<n)
    {if (n%r==0)
        {printf("%d",n);
        n=n/r;
        printf("=%d*%d\n",r,n);
        d=d+2;
    }
    else
        {r=r+1;
    }
    }
printf("Total number of drops=%d",d);
}
