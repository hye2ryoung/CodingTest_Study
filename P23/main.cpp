//
//  main.cpp
//  P23
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
int main(int argc, const char * argv[]) {
    int n, i, len=1, max=-2147000000;
    scanf("%d", &n);
    std::vector<int> a(n);
    
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
}

//pre,now를 이용한 풀이
/*
 #include<stdio.h>
 int main(){
     freopen("input.txt", "rt", stdin);
     int n, i, pre, now, cnt, max;
     scanf("%d", &n);
     scanf("%d", &pre);
     cnt=1;
     max=1;
     for(i=2; i<=n; i++){
         scanf("%d", &now);
         if(now>=pre){
             cnt++;
             if(cnt>max) max=cnt;
         }
         else cnt=1;
         pre=now;
     }
     printf("%d\n", max);
     return 0;
 }
 */
