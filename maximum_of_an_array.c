#include<stdio.h>
int main()
{
    int n,max,i;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
    printf("%d",max);
}