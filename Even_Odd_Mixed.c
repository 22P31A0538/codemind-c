#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    e=c%10;
    f=e/10;
    if(a%2==0&&c%2==0&&e%2==0)
    {
        printf("Even");
    }
    else if(a%2==1&&c%2==1&&e%2==1)
    {
        printf("Odd");
    }
    else {
        printf("Mixed");
    }
}