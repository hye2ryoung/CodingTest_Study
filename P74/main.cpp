//
//  main.cpp
//  P74
//
//  Created by hyeryoung on 2023/08/03.
//  Copyright © 2023 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    priority_queue<int> pQ;
    while(true){
        scanf("%d", &a);
        if(a==-1) break;
        if(a==0){
            if(pQ.empty()) printf("-1\n");
            else{
                printf("%d\n", -pQ.top());//루트값을 print할땐 음수값으로 존재하므로 음수를 한번 더 처리해준다
                pQ.pop();
            }
        }
        else{
            pQ.push(-a);//음수로 push하면 수의 절댓값이 작은 수가 루트에 위치하는 효과를 낼 수 있다.
        }
    }
    return 0;
}
