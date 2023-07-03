//
//  main.cpp
//  P57
//
//  Created by hyeryoung on 2021/09/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//재귀함수(스택)를 이용한 2진수 출력
void D(int x){
    if(x==0) return;
    else{
        D(x/2);
        printf("%d", x%2);
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    D(n);
    return 0;
}
