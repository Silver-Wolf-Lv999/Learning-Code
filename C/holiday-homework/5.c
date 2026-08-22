#include<stdio.h>
int main()
{
	int a = 2, b = 2;
	b *= a += a * a;
	printf("%d, %d", a, b);
	return 0;
}
