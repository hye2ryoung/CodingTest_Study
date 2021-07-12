//
//  main.cpp
//  P40
//
//  Created by hyeryoung on 2021/07/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
//교집합
int main(int argc, const char * argv[]) {
    int n, m, i, p1=0, p2=0, p3=0;
    scanf("%d", &n);
    std::vector<int> a(n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    sort(a.begin(),a.end());//퀵정렬. alrorithm라이브러리에서 제공
    scanf("%d", &m);
    std::vector<int> b(m);
    for(i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    sort(b.begin(),b.end());//일단 a배열과b배열 모두 정렬 시켜준 다음 같은값이 있는지 확인할 것이다.
    std::vector<int> c(n+m);
    while(p1<n && p2<m){//a배열의 크기n과 b배열의 크기m 둘 중 크기가 작은것까지 while문이 돌 때(작은 배열을 모두 탐색헀을 경우 종료하면 된다)
        if(a[p1]==b[p2]){//같은 값을 발견하면
            c[p3++]=a[p1++];//해당 값을 배열c에넣어준다음 c배열의포지션++해줌과 동시에
            p2++;//a와b배열의 포지션 모두 ++
        }
        else if(a[p1]<b[p2]) p1++;//a배열의 포지션값이 더 작을때 a배열의포지션++
        else p2++;//b배열의 포지션값이 더 작을때 b배열의포지션++
    }

    for(i=0;i<p3;i++){
        printf("%d ",c[i]); //같은값이 저장되어있는 c배열 출력
    }
    return 0;
}
