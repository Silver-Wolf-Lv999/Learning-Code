#include<stdio.h>
int sum_yesr(int x)
{
				if (x == 1) {
								return 10;
				}
				else {
								return sum_yesr(x-1) + 3;
				}
}

int main()
{
				printf("第六人年龄%d", sum_yesr(6));
				return 0;
}
