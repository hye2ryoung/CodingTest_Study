//
//  main.cpp
//  P73
//
//  Created by hyeryoung on 2023/08/01.
//  Copyright © 2023 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    priority_queue<int> pQ;//우선순위큐
    while(true){
        scanf("%d", &a);
        if(a==-1) break;//-1 입력 시 종료
        if(a==0){//0 입력 시
            if(pQ.empty()) printf("-1\n");//최대값 없으면(비어있으면) -1 출력
            else{
                printf("%d\n", pQ.top());//큐.top() : 큐의 루트값 출력
                pQ.pop();//루트값이 제거되고 말단노드가 업큐되어 힙이 재조정된다.(최대힙 형태 유지)
            }
        }
        else{//자연수 입력 시
            pQ.push(a);//큐에 입력값을 push
        }
    }
    return 0;
}
