#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,b,y,a=0,z=0,sq;
    scanf("%d",&n);
    k=n*n;
    while(k!=0)
    {
        b=k%10;
        k/=10;
        a=a*10+b;
    }
    sq=sqrt(a);
    while(sq!=0)
    {
        y=sq%10;
        sq/=10;
        z=z*10+y;
    }
    if(z==n)
    printf("True");
    else
    printf("False");
}