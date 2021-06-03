// 210603
// 1100.c - 더하기 사이클

#include <stdio.h>

int main()
{
    int N, num1, num2, cnt;

    // printf("enter num1: ");
    scanf("%d", &N);
    num1 = N;
    num2 = -1;
    cnt = 0;

    while(num2!=N){
        // printf("start while\n");

        if(num1<10) {
            num1 *= 10;
            num2 = num1/10%10*10 + (num1/10 + num1%10)%10;  
            // 10보다 작은 경우 - '주어진 수의 가장 오른쪽 자리 수' 를 사용해야하기 때문에 10으로 나눠준다
        }
        else
            num2 = num1%10*10 + (num1/10 + num1%10)%10;
        num1 = num2;
        cnt ++;
        // printf("%d %d\n", cnt, num2);

        
    }

    printf("%d\n", cnt);

    return 0;
}