#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,k;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n/=10;
        p=p*r;
         s=s+r;
         k=p-s;
    }
    printf("%d",k);
    
}