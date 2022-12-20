#include<stdio.h>
void k(int n)
{
    int p;
    p=n*(n-3)/2;
    printf("%d",p);
}
int main()
{
    int n;
    scanf("%d",&n);
    k(n);
}
