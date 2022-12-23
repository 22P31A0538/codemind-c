#include<stdio.h>
int main(){
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            k++;
        }
    }
    if(k==2)
    {
        printf("Prime");
    }
    else printf("Not Prime");
    
}