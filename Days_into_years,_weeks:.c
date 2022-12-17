#include<stdio.h>
void k(int a)
{
    int y,w;
    y=a/365;
    w=(a-(y*365))/7;
    printf("%d
%d",y,w);
    
}
int main()
{
	int a;
	scanf("%d",&a);
	k(a);

}