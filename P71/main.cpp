//
//  main.cpp
//  P71
//
//  Created by hyeryoung on 2021/11/02.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
//송아지 찾기(BFS: 상태트리탐색)

int ch[10001], d[3]={1, -1, 5};//3가지로 뻗어나갈 방향배열 d를 잡는다
int main(int argc, const char * argv[]) {
    int s, e, x, pos, i;
    queue<int> Q;
    scanf("%d %d", &s, &e);//출발점, 도착점
    ch[s]=1;//출발점을 체크배열에 1로 표시(방문)
    Q.push(s);//큐에 출발점 push
    while(!Q.empty()){
        x=Q.front();
        Q.pop();
        for(i=0; i<3; i++){//방향배열 처리
            pos=x+d[i];
            if(pos<=0 || pos>10000) continue; //포지션이 좌표범위를 벗어나면 넘어간다
            if(pos==e){//도착점에 포지션이 다다르면
                printf("%d\n", ch[x]);
                exit(0);
                //해당지점값이 아닌 x값(해당지점의 부모 지점)에 해당하는 체크배열값을 출력하고 바로 종료한다.
                //체크배열 각각의 값은 트리의 레벨과도 같이 취급할 수 있다. 출발지점(레벨 1) / 1번점프한 지점(레벨2) / 2번점프한 지점(레벨3) ...
                //따라서 몇번 점프했는지 구하려면 (체크배열값(=레벨)이므로) 체크배열-1값인 (ch[pos]-1=ch[x]) ch[x]을 출력한다.
            }
            if(ch[pos]==0){//방향배열 처리된 지점 방문체크/ 방문되지 않았다면
                ch[pos]=ch[x]+1;//x번째 값에 +1을 더한값을 해당지점에 넣어준다.
                Q.push(pos);//해당지점을 큐에 push해준다
            }
        }
    }
    return 0;
}
