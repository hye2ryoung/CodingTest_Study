//
//  main.cpp
//  P11
//
//  Created by hyeryoung on 2021/06/25.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n, tmp, cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        tmp=i;//자연수 1~n을 tmp에 넣어서
        while(tmp>0)
        {
            tmp=tmp/10; //10으로 나눈 몫이 0이될 때 까지
            cnt++; //개수 1개씩 증가
        }
    }
    printf("%d",cnt);
    return 0;
}
