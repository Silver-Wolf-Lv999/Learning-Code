#include <stdio.h>
int main()
{
	int a = 1, b = 0, t;
	t = a > b || ++a && b++;
	printf("%d, %d, %d",t ,a ,b);
	return 0;
}
