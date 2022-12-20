#include<stdio.h>
void k(int a)
{
    int h,m;
    h=a/60;
    m=a%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}
int main()
{
    int a;
    scanf("%d",&a);
    k(a);
}
