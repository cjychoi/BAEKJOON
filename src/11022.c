// 210531
// 11022.c - A+B-8

#include <stdio.h> 

int main()
{
    int num, a, b;
    scanf("%d", &num);

    for (int i=0; i<num; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }

    return 0;
}