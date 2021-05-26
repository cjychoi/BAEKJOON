// 210526
// 2588.c - 세자리 수 곱셈

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, num6;

    scanf("%d %d", &num1, &num2);

    num3 = num1 * (num2%10);
    num4 = num1 * (num2%100/10);
    num5 = num1 * (num2/100);
    num6 = num3 + 10*num4 + 100*num5;

    printf("%d\n%d\n%d\n%d\n", num3, num4, num5, num6);

    return 0;
}