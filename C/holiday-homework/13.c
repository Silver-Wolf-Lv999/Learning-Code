#include<stdio.h>
int main()
{
	char a = 't';
	a = (a >= 'a' && a <= 'z') ? (a - 'a' + 'A') : a;
	printf("%c", a);
	return 0;
}
