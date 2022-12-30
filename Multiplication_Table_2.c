#include<stdio.h>
int main()
{
    int a,b,p,i;
    scanf("%d%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        p=a*i;
        printf("%d x %d = %d
",a,i,p);
    }
}