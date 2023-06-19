//
//  main.cpp
//  P45
//
//  Created by hyeryoung on 2021/07/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//공주 구하기
int main(int argc, const char * argv[]) {
    int n, k, i, pos=0, bp=0, cnt=0;
    //bp : breakpoint 마지막 왕자만 남았을때 break
    //cnt : k번째 왕자를 카운팅
    scanf("%d %d", &n, &k);//왕자 n명, out시킬 순서 k번째
    vector<int> prince(n+1);
    
    while(1){
        pos++;//pos를 1부터 증가시키다가 n(왕자 수)을 넘었을 때 pos=1으로 초기화
        if(pos>n) pos=1;
        if(prince[pos]==0){//pos가 위치한 값이 0인 왕자들만 순서대로 카운팅
            cnt++;
            if(cnt==k){//pos을 세다가 k번째 왕자일때 해당 왕자 값을 1로 만들어 아웃시킨다
                prince[pos]=1;
                cnt=0;//다음 k번째 왕자를 찾기 위해 카운팅 초기화
                bp++;//마지막 왕자가 남을때 까지 bp 카운팅 하다가
            }
        }
        if(bp==n-1) break; //마지막 왕자만 남았을때 break
    }
    for(i=1;i<=n;i++){
        if(prince[i]==0){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
    
}
