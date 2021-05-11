//
//  main.c
//  -2884
//
//  Created by Andrew Choi on 2021/05/11.
//

#include <stdio.h>

int main() {
    int hr, min;
    
    printf("input time: ");
    scanf("%d %d", &hr, &min);
    
    if(min>45 || min==45)
        min -= 45;
    else{
        min += 15;
        if(hr==0)
            hr = 23;
        else
            hr --;
    }
    
    printf("%d %d\n", hr, min);
    
    return 0;
}
