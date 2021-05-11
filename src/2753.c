//
//  main.c
//  -2753
//
//  Created by Andrew Choi on 2021/05/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    
    scanf("%d", &year);
    if(year%4==0 && year%100!=0)
        printf("1");
    else if(year%400==0)
        printf("1");
    else
        printf("0");
    
    return 0;
}
