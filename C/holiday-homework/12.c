#include<stdio.h>
int main()
{
	int a = 0;
	if (a++ > 1) {
		printf("%d", a);
	} 
	else {
		printf("%d", --a);
	}
	return 0;
}
