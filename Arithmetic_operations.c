#include<stdio.h>
void k(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum:%d",c);
    printf("
");
	c=a-b;
	printf("Difference:%d",c);
	printf("
");
	c=a*b;
	printf("Product:%d",c);
	printf("
");
		c=a/b;
	printf("Quotient:%d",c);
	printf("
");
	c=a%b;
	printf("Remainder:%d",c);
	printf("
");
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	k(a,b);
}