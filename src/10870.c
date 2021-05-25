// 10870.c 재귀함수 - 피보나치 수열

#include <stdio.h>

int fib(int num)
{
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return fib(num-2)+fib(num-1);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fib(num));

    return 0;
}