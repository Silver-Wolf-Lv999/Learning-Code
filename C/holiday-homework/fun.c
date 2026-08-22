#include<stdio.h>
#include<stdlib.h>

int fun(int num_1, int num_2)
{
				return abs(num_1 - num_2);							
}

int main()
{
				int a = 1, b = -5;
				int c = fun(a, b);
				printf("%d", c);
				return 0;
}
