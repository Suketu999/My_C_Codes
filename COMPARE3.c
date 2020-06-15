#include <stdio.h>
void main()
{
float a,b,c,d;
printf("Enter value of a:");
scanf("%f",&a);
printf("Enter value of b:");
scanf("%f",&b);
printf("Enter value of c:");
scanf("%f",&c);
d =(a>b)?(a>c?a:c):(b>c?b:c);
printf("Greatest number is:%f",d);
//# include <stdio.h>
//void main()
//{
//int a, b, c, big ;
//printf("Enter three numbers : ") ;
//scanf("%d %d %d", &a, &b, &c) ;
//big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
//printf("\nThe biggest number is : %d", big) ;
//}
}
