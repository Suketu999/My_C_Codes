#include <stdio.h>
#include <string.h>
int val(int a);
int gcd(int a, int b);
void main()
{
int a,b,r,s,g;
char A[3],B[3];
printf("Enter the symbol of 'A':");
scanf("%s",A);
printf("Enter the symbol of 'B':");
scanf("%s",B);
printf("Enter the atomic number of '%s':",A);
scanf("%d",&a);
printf("ENter the atomic number of '%s':",B);
scanf("%d",&b);
r=val(a);
if (r>4)
    r=8-r;
s=val(b);
if (s>4)
    s=8-s;
g=gcd(r,s);
if ((r/g)==1)
    printf("The compound formed is: %s%d%s",A,s/g,B);
else if ((s/g)==1)
    printf("The compound formed is: %s%s%d",A,B,r/g);
else
    printf("The compound formed is: %s%d%s%d",A,s/g,B,r/g);
}
int val(int a)
{
int c;
c=a-2;
if (c<=0)
    return a;
a=c;
c=c-8;
if (c<=0)
    return a;
a=c;
c=c-8;
if (c<=0)
    return a;
a=c;
c=c-18;
if (c<=0)
    return a;
a=c;
c=c-18;
if (c<=0)
    return a;
a=c;
c=c-32;
if (c<=0)
    return a;
a=c;
c=c-32;
if (c<=0)
    return a;
}
int gcd(int a, int b)
{
while (a!=b)
    {
    if (a>b)
        a=a-b;
    else
        b=b-a;
    }
return a;
return;
}
