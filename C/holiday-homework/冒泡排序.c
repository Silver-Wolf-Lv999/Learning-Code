#include<stdio.h>
#define Max 10

int main()
{
				int numbers[Max] = {0}, t = 0;
				
				for (int i = 0;i < Max; i++) {
								scanf("%d", &numbers[i]);
				}

				for (int i = 0; i < Max - 1; i++) {
								for (int j = 0; j < Max - i - 1; j++) {
												if (numbers[j] <= numbers[j + 1]) {
																numbers[j+1] = numbers[j] + numbers[j + 1];
																numbers[j] = numbers[j +1] - numbers[j];
																numbers[j + 1] = numbers[j + 1] - numbers[j];
												}
								}
				}

				for (int i = 0; i < Max; i++) {
								printf("%2d", numbers[i]);
				}
				return 0;
}
