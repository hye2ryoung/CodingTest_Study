//
//  main.cpp
//  P9
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j, n, cnt[50001];
    scanf("%d", &n);
    for(i=1; i<=n; i++) //i : 1~n
    {
        //j : i~n / j=j+i : j는 i의 배수들
        for(j=i; j<=n; j=j+i)
        {
            cnt[j]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",cnt[i]);
    }
    
    return 0;
}
