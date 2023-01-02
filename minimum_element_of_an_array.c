#include<stdio.h>
int main()
{
    int n,min,i;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
        min=a[i];
        }
    }
    printf("%d",min);
}