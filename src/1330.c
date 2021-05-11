//
//  main.c
//  -1330
//
//  Created by Andrew Choi on 2021/05/04.
//

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    if(A>B){
        printf(">\n");
        return 0;
    }
    else if(A<B){
        printf("<\n");
        return 0;
    }
    else {// A==B
        printf("==\n");
        return 0;
    }
    
    return 0;
}
