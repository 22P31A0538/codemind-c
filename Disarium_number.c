#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,temp,k,d,s=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        k=temp%10;
        temp/=10;
        c++;
    }
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp/=10;
        s=s+pow(d,c);
        c--;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}