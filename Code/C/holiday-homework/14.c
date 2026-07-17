#include<stdio.h>
int main()
{
	double sum = 0, t = 1;
	int i = 1;
	while (t >= 0.1) {
		t = 1.0/i;
		sum += t;
		i++;
	}
	printf("%lf", sum);
	return 0;
}
