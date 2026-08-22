#include<stdio.h>
#define Max 100
int main()
{
				char str[Max];
				int i = 0;
				fgets(str, sizeof(str), stdin);
				
				while (str[i] != '\0') {
								if (str[i] <= 'U' && str[i] >= 'A') {
												str[i] += 5;
												
								}
								else if (str[i] <= 'Z' && str[i] >= 'V') {
												str[i] -= 21;
								}
								i++;
				}

				printf("%s", str);
				return 0;
}
