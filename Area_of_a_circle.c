#include<stdio.h>
void k(int r)
{
    float a;
    a=3.14*r*r;
    printf("%0.2f",a);
}
int main()
{
    int r;
    scanf("%d",&r);
    k(r);
}
