// 210602
// 10871.c - X보다 작은 수

#include <stdio.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    
    int ary[10000];

    for (int i=0; i<N; i++){
        scanf("%d", &ary[i]);
        if(ary[i]<X)
            printf("%d ", ary[i]);
    }

    return 0;
}