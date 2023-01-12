#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,s=0,c=0,k;
    scanf("%d",&n);
    int a[i];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        s=s+a[i];
    }
    k=(s/n);
    for(i=1;i<=n;i++)
    {
        if(a[i]<=k)
        c++;
    }
    printf("%d",c);
    
}