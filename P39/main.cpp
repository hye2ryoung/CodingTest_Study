//
//  main.cpp
//  P39
//
//  Created by hyeryoung on 2021/07/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
//병합정렬
int main(int argc, const char * argv[]) {
    int n, m, i, p1=0, p2=0, p3=0;
    scanf("%d", &n);
    std::vector<int> a(n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]); //a배열과
    }
    scanf("%d", &m);
    std::vector<int> b(m);
    for(i=0;i<m;i++){
        scanf("%d", &b[i]); //b배열 입력
    }
    std::vector<int> c(n+m); //c배열은 a배열과 b배열의 크기를 합친 배열
    
    while(p1<n && p2<m){//a배열의 크기n과 b배열의 크기m 둘 중 크기가 작은것까지 while문이 돌 때
        if(a[p1]<b[p2]){
            c[p3++]=a[p1++];
        }
        else{
            c[p3++]=b[p2++];
        }
    }
    while(p1<n) c[p3++]=a[p1++];//위의 while문을 돌고 (b배열 크기가 더 작아서) 남은 a배열 처리
    while(p2<m) c[p3++]=b[p2++];//위의 while문을 돌고 (a배열 크기가 더 작아서) 남은 b배열 처리

    for(i=0;i<p3;i++){
        printf("%d ",c[i]); //병합정렬된 c배열 출력
    }
    return 0;
}
