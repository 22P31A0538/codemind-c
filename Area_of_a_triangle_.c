#include<stdio.h>
void k(int b,int h)
{
    int a;
    a=(b*h)/2;
    printf("%d",a);
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    k(b,h);
}
