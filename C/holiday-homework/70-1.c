#include<stdio.h>
#define MAX_NAME 100

struct student {
				char name[MAX_NAME];
				float score;
};

float max_score(struct student a[], int n)
{
				float max = a[0].score;

				for (int i = 1; i < n; i++) {
							if (max < a[i].score)
											max = a[i].score;
				}

				return max;
}

int main(void)
{
				float max = 0;
				struct student information[5];

				for (int i = 0; i < 5; i++) {
								fgets(information[i].name, MAX_NAME, stdin);
								scanf("%f", &information[i].score);
				}	

				max = max_score(information, 5);

				printf("Max score is %f", max);

				return 0;
}
