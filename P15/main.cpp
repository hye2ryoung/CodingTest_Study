//
//  main.cpp
//  P15
//
//  Created by hyeryoung on 2021/06/28.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j, n, cnt=0, flag=0;
    scanf("%d", &n);
    for(i=2; i<=n; i++) //i : 2~n
    {
        flag=1;
        for(j=2; j*j<=i; j++)//i의 제곱근까지만 for문을 확인하면 됨. ex) 36 = (1*36 제외) 2*18,3*12,4*9,6*6...일때 6까지만 확인하면 나머지도 저절로 확인되기 때문.
        {
            if(i%j==0) //소수가 아닐때 (flag 0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1) cnt++; //소수일때(flag 1) 카운팅
    }
    printf("%d",cnt);
    
    return 0;
}
