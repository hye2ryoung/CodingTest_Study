//
//  main.cpp
//  P33
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//선택정렬 응용 
int main(int argc, const char * argv[]) {
    
    int n, a[101], i, j, idx, tmp, cnt=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++){
        idx=i;
        for(j=i+1; j<n; j++){
            if(a[idx]<a[j])
                idx=j;
        }
        tmp=a[i];
        a[i]=a[idx];
        a[idx]=tmp;
    }
    for(i=1; i<n; i++){
        if(a[i-1]!=a[i]) cnt++; //이전 인덱스값과 현재값이 다르면 cnt증가
        if(cnt==2){//3등점수를 뽑아내려면 cnt가 두번증가(첫인덱스(최대값)와 다음인덱스(현재값)을 비교했을때 다르면 cnt=1, 2등점수와 다음인덱스(현재값)을 비교했을때 다르면 cnt=2 이 때 현재값이 3등점수
            printf("%d", a[i]);
            break;
        }
    }
    
    return 0;
    
}
