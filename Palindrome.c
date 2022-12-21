#include<stdio.h>
int main()
{
    int n,m,rem,rev=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    if(m==rev)
    {
        printf("True");
    }
    else
    printf("False");
}