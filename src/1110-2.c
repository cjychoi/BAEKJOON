// 210603
// 1100-2.c - 더하기 사이클 sol 2 (Short solution)

#include <stdio.h>

int main()
{
    int N, num1, cnt;

    // printf("enter num1: ");
    scanf("%d", &N);
    num1 = N;
    cnt = 0;

    while(1){
        // printf("start while\n");

        num1 = num1%10*10 + (num1/10 + num1%10)%10;
        cnt ++;
        // printf("%d %d\n", cnt, num2);

        if(num1 == N){
            printf("%d\n", cnt);
            break;
        }
        
    }

    return 0;
}