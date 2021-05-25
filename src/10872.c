//
//  main.c
//  -10872
//  팩토리얼 재귀함수
//
//  Created by Andrew Choi on 2021/05/20.
//

#include <stdio.h>

int factorial (int);

int main(int argc, const char * argv[])
{
    int num;
    scanf("%d", &num);
    printf("%d\n", factorial(num));

}

int factorial(num)
{
    if(num==1)
        return 1;
    else
        return num*factorial(num-1);
}