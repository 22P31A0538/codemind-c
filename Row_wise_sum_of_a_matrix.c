#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,s=0,a[m][n];
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
           
           s=s+a[i][j];
        }
        printf("%d ",s);
    }
    
}