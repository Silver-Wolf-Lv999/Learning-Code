#include<stdio.h>
#define MaxNumber 300

int main()
{
	int  i = 0, p = 1;

	for (i = 200; i <= MaxNumber; i++) {
		p = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0)	{
				p = 0;	
				break;
			}
		}
		if (p == 1) {
			printf("%4d", i);
		}
	}

	return 0;
}
