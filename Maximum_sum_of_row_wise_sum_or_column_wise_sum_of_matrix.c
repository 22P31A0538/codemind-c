#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int s=0,i,j,a[m][n],rmax=0,cmax=0;
    
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
        if(rmax<s)
        {
            rmax=s;
        }
    }
    for(j=0;j<n;j++)
    {
        s=0;
        for(i=0;i<m;i++)
        {

            s=s+a[i][j];
        }
        if(cmax<s)
        {
            cmax=s;
        }
    }if(rmax<cmax)
    {
        printf("%d",cmax);
    }
    else
    {
        printf("%d",rmax);
    }
}