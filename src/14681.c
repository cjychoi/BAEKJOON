// 210527
// 14681.c - 사분면 고르기

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x>0){
        if(y>0)
            printf("1\n");
        else
            printf("4\n");
    }
    else{ //x<0
        if(y>0)
            printf("2\n");
        else
            printf("3\n");
    }

    // printf("%d",a>0?b>0?1:4:b>0?2:3);
}