//
//  main.cpp
//  P19
//
//  Created by hyeryoung on 2021/06/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, a[101], max, cnt=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){//배열 a값을 채운 다음
        scanf("%d", &a[i]);
    }
    max=a[n];//배열 마지막 값을 max로 지정해서 거슬러 올라간다
    for(i=n-1;i>=1;i--){//max와 비교 했을 때 더 큰 값을 찾을때마다 max를 바꿔주고 카운팅
        if(a[i]>max){
            max=a[i];
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
