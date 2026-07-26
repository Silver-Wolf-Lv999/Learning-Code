#include<stdio.h>
#define MAX_NUMBER 10

int max_value(int *p, int n)
{
  int max = *p;
  for (int i = 1; i < n; i++) {
    if (max < *(p + i))
      max = *(p + i);
  }

  return max;
}

int main(void)
{
  int arr[MAX_NUMBER] = {0};
  int max = 0;
  for (int i = 0; i < MAX_NUMBER; i++) {
    scanf("%d", &arr[i]);
  }

  max = max_value(arr, MAX_NUMBER);

  printf("%d\n", max);

  return 0;
}
