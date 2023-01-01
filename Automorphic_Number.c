#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,d,e,r;
    scanf("%d",&a);
    n=a*a;
    d=log10(a)+1;
    e=pow(10,d);
    r=n%e;
    if(r==a)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}