//
//  main.cpp
//  P25
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, j, a[101], b[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=1; //b의 모든 인덱스 1로 만들어줌
    }
    for(i=1;i<=n;i++){
        for(j=1; j<=n; j++){
            if(a[j]>a[i]) b[i]++; //다른 인덱스와 비교할 때마다 작으면 카운팅
        }
    }
    for(i=1; i<=n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}
