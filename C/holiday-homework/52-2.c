#include<stdio.h>

int main()
{
				struct scores {
								int chinese;
								int math;
								int english;
				} students[5], cont = {0, 0, 0};

				for (int i = 0; i < 5; i++) {
								scanf("%d %d %d", &students[i].chinese, &students[i].math, &students[i].english);
				}

				for (int i = 0; i < 5; i++) {
								if (students[i].chinese >= 60) {
											cont.chinese++;	
								}
								if (students[i].math >= 60) {
												cont.math++;
								}
								if (students[i].english >= 60) {
												cont.english++;
								}
				}

				printf("语文:%d 数学:%d 英语:%d", cont.chinese, cont.math, cont.english);

				return 0;
}
