#include<stdio.h>
int main()
{
    int n,rem,rev=0,m; 
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        rev=rev*10+rem;
    }
    if(m==rev)
    {
        printf("Palindrome");
    }
    else
    printf("Not Palindrome");
}