//
//  main.cpp
//  P29
//
//  Created by hyeryoung on 2021/07/05.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    int n, i, tmp, cnt=0, res;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        tmp=i;//자연수 1~n을 tmp에 넣어서
        while(tmp>0)
        {
            res=tmp%10;//10으로 나눈 나머지(1의자리)
            if(res==3) cnt++;//가 3이라면 카운팅
            tmp=tmp/10; //아니라면 10으로 나눈 몫이 0이될 때 까지 반복
        }
    }
    printf("%d",cnt);
    return 0;
}
