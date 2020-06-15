#include <stdio.h>
void main()
{
int a[9][6],i=0,n,s;
printf("Enter 1 for White, 2 for Green, 3 for Red,\n\t 4 for Orange, 5 for Blue, 6 for Yellow.");
printf("\n\nEnter the colours on TOP face starting from top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][0]);
    i++;
    }
i=0;
printf("\nEnter the colours on BOTTOM face starting from\n\t top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][5]);
    i++;
    }
i=0;
printf("\nEnter the colours on FACING face starting from\n\t top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][1]);
    i++;
    }
i=0;
printf("\nEnter the colours on OPPOSING face starting from\n\t top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][4]);
    i++;
    }
i=0;
printf("\nEnter the colours on RIGHT face starting from\n\t top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][2]);
    i++;
    }
i=0;
printf("\nEnter the colours on LEFT face starting from\n\t top row left to right and then down:\n");
while (i<9)
    {
    scanf("%d",&a[i][3]);
    i++;
    }
i=0;

printf("Enter 111 to shift 1st column up,\n 112 to shift 1st column down,\n");
printf("Enter 121 to shift 2nd column up,\n 122 to shift 2nd column down,\n");
printf("Enter 131 to shift 3rd column up,\n 132 to shift 3rd column down,\n");
printf("Enter 211 to shift 1st row right,\n 212 to shift 1st row left,\n");
printf("Enter 221 to shift 2nd row right,\n 222 to shift 2nd row left,\n");
printf("Enter 231 to shift 3rd row right,\n 232 to shift 3rd row left,\n");
scanf("%d",&n);

if (n==111)
    {
    a[0][0]
    a[3][0]
    a[6][0]
    }
}
