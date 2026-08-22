#include <stdio.h>
int main()
{
	int a = 0;
	a += (a = 15);
	printf("%d", a);
	return 0;
}
