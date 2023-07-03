//
//  main.cpp
//  P56
//
//  Created by hyeryoung on 2021/09/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//재귀함수 분석(stack을 이용하는 재귀)
void recur(int x){
    if(x==0)return;
    else{
        recur(x-1);
        printf("%d ", x);
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    recur(n);
    return 0;
}
