#include<stdio.h>
int k(int a)
{
    if(a<0)
    {
        return 0;
    }
    else if(a==0)
    {
        return 1;
    }
    return k(a-1)+k(a-2)+k(a-3);
}
int main()
{
    int n,i; 
    scanf("%d",&n);
    i=k(n);
    printf("%d",i);
}
