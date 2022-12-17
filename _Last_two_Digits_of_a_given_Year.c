#include<stdio.h>
void k(int year)
{
	int yr;
	yr=year%100;
	printf("%0.2d",yr);
}
int main()
{
  int year;
  scanf("%d",&year);
  k(year);
}