//
//  main.cpp
//  P60
//
//  Created by hyeryoung on 2021/09/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//합이 같은 부분집합(DFS 완전탐색)
int n, a[11], total=0;//total: 원소의 총 합
bool flag=false;
void DFS(int L, int sum){//sum: 레벨 별 원소의 누적값)
    if((total/2)<sum) return;//원소들의 총 합의 절반보다 부분집합의 합이 크다면 정답이 될 수 없으므로 종료시킨다.(시간단축)
    if(flag==true) return;//두 부분집합의 합이 같으면 return(넘어올 재귀함수들이 바로 종료된다)
    if(L==n+1){//레벨(L)을 n까지 처리하고 n+1이될때 종료
        if(sum==(total-sum)){// [누적값 계산에 포함시킨 원소들의 합sum]과 [포함되지 않은 나머지 부분집합의 합 total-sum]이 같을 경우
            flag=true;
        }
    }
    else{
        DFS(L+1, sum+a[L]);//각 레벨L에 해당하는 원소를 더해간다(원소를 부분집합에 포함시킨 경우)
        DFS(L+1, sum); //해당 레벨 원소를 부분집합에 포함시키지 않은 경우
    }
}
int main(int argc, const char * argv[]) {
    int i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
        total+=a[i];
    }
    DFS(1, 0);
    if(flag==true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
