#include<stdio.h>

int fun(int x)
{
				if (x == 5) {
								return 2;
				} else {
								return fun(1 + 1) + 2;
				}
}


int main(void)
{
				int m;
				scanf("%d", &m);	
				printf("第%d名得%d分", m, fun(m));
				return 0;
}
