#include<stdio.h>

int main()
{
				int numbers[10] = {0};

				for (int i = 0; i < 10; i++) {
								scanf("%d", &numbers[i]);
				}

				for(int i = 9; i >= 0; i--) {
								printf("%4d", numbers[i]);
				}

				return 0;
}
