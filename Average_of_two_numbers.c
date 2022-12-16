#include<stdio.h>
void k(int a,int b)
{
    float avg;
    avg=(a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	k(a,b);
}