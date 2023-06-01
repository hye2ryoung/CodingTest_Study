//
//  main.cpp
//  P23
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
int main(int argc, const char * argv[]) {
    int n, i, len=1, max=-2147000000;
    scanf("%d", &n);
    vector<int> a(n);
    cout << n;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)//처음부터 n-1까지 (다음값과 비교해야하므로)
    {
        if(a[i]<=a[i+1]) len++; //이전값, 다음값 비교헀을 때 증가이면 길이++
        else len=1; //증가하지 않으면 길이 초기화 (1)
        
        if(max<len) max=len;
    }
    printf("%d\n", max);
    return 0;
     
}*/

//pre,now를 이용한 풀이

#include <stdio.h>
int main(){
    int n, i, pre, now, cnt, max;
    scanf("%d", &n);
    scanf("%d", &pre);
    cnt=1;//길이
    max=1;
    for(i=2; i<=n; i++){
        scanf("%d", &now);
        if(now>=pre){//현재값이 이전값보다 크거나같으면
            cnt++;//길이++
            if(cnt>max) max=cnt;//최댓값 확인해서 저장
        }
        else cnt=1; //아니라면 길이 다시 1로 초기화
        pre=now;//현재값을 이전값으로 지정하고 다시 for문으로 돌아가 그다음값과 이전값을 비교
    }
    printf("%d\n", max);
    return 0;
 }
 
 
