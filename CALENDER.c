#include <stdio.h>
int main()
{
int a,d,m,y;
printf("Enter date:");
scanf("%d",&d);
printf("Enter month (number):");
scanf("%d",&m);
printf("Enter year:");
scanf("%d",&y);

if (y>2016)
    {
    a=(365*(y-2016))+((y-2016)/4);
    }
else if (y==2016)
    {
    a=(365*(2016-y))+((2016-y)/4);
    }
else
    {
    a=1+(365*(2016-y))+((2016-y)/4);
    }

//printf("%d\n",a);


if (y>2016 && y%4==0)
    {
    if (m==1)
        a=a-366;
    else if (m==2)
        a=a-335;
    else if (m==3)
        a=a-306;
    else if (m==4)
        a=a-275;
    else if (m==5)
        a=a-245;
    else if (m==6)
        a=a-214;
    else if (m==7)
        a=a-184;
    else if (m==8)
        a=a-153;
    else if (m==9)
        a=a-122;
    else if (m==10)
        a=a-92;
    else if (m==11)
        a=a-61;
    else
        a=a-31;
    }
else if (y>2016 && y%4!=0)
    {
    if (m==1)
        a=a-365;
    else if (m==2)
        a=a-334;
    else if (m==3)
        a=a-305;
    else if (m==4)
        a=a-275;
    else if (m==5)
        a=a-245;
    else if (m==6)
        a=a-214;
    else if (m==7)
        a=a-184;
    else if (m==8)
        a=a-153;
    else if (m==9)
        a=a-122;
    else if (m==10)
        a=a-92;
    else if (m==11)
        a=a-61;
    else
        a=a-31;
    }
else if (y<=2016 && y%4==0)
    {
    if (m==1)
        a=a+366;
    else if (m==2)
        a=a+335;
    else if (m==3)
        a=a+306;
    else if (m==4)
        a=a+275;
    else if (m==5)
        a=a+245;
    else if (m==6)
        a=a+214;
    else if (m==7)
        a=a+184;
    else if (m==8)
        a=a+153;
    else if (m==9)
        a=a+122;
    else if (m==10)
        a=a+92;
    else if (m==11)
        a=a+61;
    else
        a=a+31;
    }
else
    {
    if (m==1)
        a=a+365;
    else if (m==2)
        a=a+334;
    else if (m==3)
        a=a+305;
    else if (m==4)
        a=a+275;
    else if (m==5)
        a=a+245;
    else if (m==6)
        a=a+214;
    else if (m==7)
        a=a+184;
    else if (m==8)
        a=a+153;
    else if (m==9)
        a=a+122;
    else if (m==10)
        a=a+92;
    else if (m==11)
        a=a+61;
    else
        a=a+31;
    }

//printf("%d\n",a);

if (y>2016)
    a=a+d;
else
    a=a-d;

//printf("%d\n",a);

if (y>2016)
    {
    if (a%7==2)
        printf("The day is/will be/was Monday");
    else if (a%7==3)
        printf("The day is/will be/was Tuesday");
    else if (a%7==4)
        printf("The day is/will be/was Wednesday");
    else if (a%7==5)
        printf("The day is/will be/was Thursday");
    else if (a%7==6)
        printf("The day is/will be/was Friday");
    else if (a%7==1)
        printf("The day is/will be/was Sunday");
    else
        printf("The day is/will be/was Saturday");
    }
else
    {
    if (a%7==5)
        printf("The day is/will be/was Monday");
    else if (a%7==4)
        printf("The day is/will be/was Tuesday");
    else if (a%7==3)
        printf("The day is/will be/was Wednesday");
    else if (a%7==2)
        printf("The day is/will be/was Thursday");
    else if (a%7==1)
        printf("The day is/will be/was Friday");
    else if (a%7==6)
        printf("The day is/will be/was Sunday");
    else
        printf("The day is/will be/was Saturday");
    }
}
