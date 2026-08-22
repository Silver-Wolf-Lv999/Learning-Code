#include<stdio.h>
#define Cubed(x) (x * x * x)
int decision(int num)
{
				int a[3] = {0};
				int t = num;
				for (int i = 0; i < 3; i++) {
							a[i] = t % 10;
							t /= 10;
				}

				int sum = Cubed(a[0]) + Cubed(a[1]) + Cubed(a[2]);

				if (sum == num) {
								return 1;
				}
				else {
								return 0;
				}
}

int main()
{
				int k = 0;
				for (int i = 100; i <= 999; i++) {
								k = decision(i);
								if (k == 1) {
												printf("%5d", i);
								}
				}
				return 0;
}
