#include<stdio.h>

int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int a, b;
    printf("输入两个正整数: ");
    scanf("%d%d", &a, &b);
    printf("最小公倍数: %d\n", lcm(a, b));
    return 0;
}
