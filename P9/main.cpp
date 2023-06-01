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
        //j : i~n / j=j+i : j는 i의 배수들. j의 개수를 카운트배열에 플러스 시켜주는 방식
        //i%j==0과 같은 약수를 구하는 방식은 시간복잡도가 n^2이므로(timelimit이 뜨기쉬움) i의 배수를 카운트 하는 방식으로 접근한다.
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
