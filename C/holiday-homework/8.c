#include<stdio.h>
int main()
{
	int a = 29;
	a += a %= 8;
	printf("%d", a);
	return 0;
}
