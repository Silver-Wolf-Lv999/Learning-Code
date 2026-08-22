#include <stdio.h>
int main()
{
	int x, y, z, d;
	x = 2;
	y = 3;
	z = 5;
	d = x > y > x && ++y;
	printf("%d,%d", d, y);
	return 0;
}
