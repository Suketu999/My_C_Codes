#include <windows.h>
#include <stdio.h>
int main()
{
int i=500;
while(i<=50000)
{Beep(1000,i);
i=i+100;
}
return 0;
}
