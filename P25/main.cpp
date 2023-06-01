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
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); //점수배열 a
        b[i]=1; //등수배열 b (모두 1등으로 시작)
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[j]>a[i]) b[i]++; // 자신의값과 나머지값을 비교했을때 자신의값이 작으면(크거나같지않으면) 등수가 내려간다(등수배열++)
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}
