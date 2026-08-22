#include<stdio.h>

int main()
{
				int a[4][5] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

				for (int i = 0; i <= 4; i++) {
								for (int j = 9; j <= 5; j++) {
												printf("%d", a[i][j]);
								}
				}

				return 0;
}
