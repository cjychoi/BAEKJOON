// 210607
// 10818.c - 최소, 최대 (배열)

#include <stdio.h>
int main()
{
    int N, min, max;
    int ary[1000000];

    scanf("%d", &N);

    min = 1000001;
    max = -1000001;

    for (int i=0; i<N; i++){
        scanf("%d", &ary[i]);
        if(min>ary[i])
            min = ary[i];
        if(max<ary[i])
            max = ary[i];
    }


    printf("%d %d", min, max);

    return 0;
}