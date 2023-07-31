//
//  main.cpp
//  P72
//
//  Created by hyeryoung on 2022/03/10.
//  Copyright © 2022 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, k, i;
    queue<int> Q;
    scanf("%d %d", &n, &k);
    for(i=1;i<=n;i++){
        Q.push(i);
    }
    while(!Q.empty()){
        for(i=1;i<k;i++){//1번째부터 k번째 전까지 처리
            Q.push(Q.front());//큐의 맨앞번호를 맨뒤에push
            Q.pop();//큐의 맨앞번호pop
        }
        Q.pop();//k번째 pop처리
        if(Q.size()==1){//큐에 번호가 1개 남았을 때
            printf("%d\n",Q.front());//남은 번호를 출력
            Q.pop();//나머지1개를pop하면 큐가 자동으로 empty되면서 while문 종료
        }
    }
    return 0;
}
