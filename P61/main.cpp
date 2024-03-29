//
//  main.cpp
//  P61
//
//  Created by hyeryoung on 2021/10/05.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//특정 수 만들기(DFS 완전탐색)

int n, m, a[11], count=0, path[11];
//원소정보출력하고싶을때 path로 추출
void DFS(int L, int res){
    if(L==n+1){
        if(res==m){
            count++;
            for(int i=1;i<=n;i++){
                printf("%d ", path[i]);//원소정보출력
            }
            puts("");
        }
    }
    else{
        path[L]=a[L];
        DFS(L+1, res+a[L]);//+로 참여
        path[L]=-a[L];
        DFS(L+1, res-a[L]);//-로 참여
        path[L]=0;
        DFS(L+1, res);//미참여원소
    }
}

int main(int argc, const char * argv[]) {
    int i;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    DFS(1, 0);
    if(count==0) printf("-1\n");
    else printf("%d\n", count);
    return 0;
}
