//
//  main.cpp
//  P59
//
//  Created by hyeryoung on 2021/09/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//부분집합(DFS 완전탐색)
int n, ch[11];
void DFS(int L){
    int i;
    if(L==n+1){//N=3일때 이진트리의 레벨L이 4까지 있다.(L=4인 D(4)가 종착지점)
        //종착지점에 도달했을 때,
        //체크배열ch를 이용하여 체크(ch[i]==1)된 자연수N=3의 원소 1~3을 출력한다.
        for(i=1;i<=n;i++){
            if(ch[i]==1) printf("%d ", i);
        }
        puts(""); //줄바꿈
    }
    else{//종착지점이 아닐때는 이진트리를 탐색해나간다.
        ch[L]=1;
        DFS(L+1);
        //원소가 부분집합에 참여(1)하는지 미참여(0)하는지 경우를 나눠서 각각 체크하고 다음레벨의 지점 D(L+1)를 호출한다.
        ch[L]=0;
        DFS(L+1);
    }
}
int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    DFS(1);
    return 0;
}
