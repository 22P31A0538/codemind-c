#include<stdio.h>
void k(int t,int s,int b)
{
    int c;
    c=2*t*s*b*512/1024;
    printf("%d KB",c);
}
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    k(t,s,b);
}