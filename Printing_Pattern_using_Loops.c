#include<stdio.h>
int main()
{
    int n,l,start,end;
    scanf("%d",&n);
    l=2*n-1;
    start=0;
    end=l-1;
    int a[l][l];
    while(n!=0)
    {
        for(int i=start;i<=end;i++)
        {
            for(int j=start;j<=end;j++)
            {
                if(i==start||i==end||j==start||j==end)
                {
                    a[i][j]=n;
                }
            }
        }
    start++;
    end--;
    n--;
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("
");
    }
     
    return 0;
}