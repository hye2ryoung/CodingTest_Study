//
//  main.cpp
//  P69
//
//  Created by hyeryoung on 2021/11/01.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//이진트리 넓이우선탐색(BFS : 큐 자료구조 직접구현)
//BFS(Breadth First Search)
int Q[100], front=-1, back=-1, ch[10];
//큐에 back으로 자료를 넣고, front로 빼낸다(큐 : 선입선출)
vector<int> map[10];
int main(int argc, const char * argv[]) {
    int i, a, b, x;
    for(i=1; i<=6; i++){
        scanf("%d %d", &a, &b);
        //무방향 그래프
        map[a].push_back(b);//인접리스트
        map[b].push_back(a);
    }
    Q[++back]=1;//큐에 1번노드를 넣어준다
    ch[1]=1;//1번노드에 방문체크
    while(front<back){//front와back이 같아지면 멈춘다)
        x=Q[++front];
        printf("%d ", x);
        for(i=0; i<map[x].size(); i++){//x노드와 연결된 노드들 중에
            if(ch[map[x][i]]==0){//방문되지않은 노드는
                ch[map[x][i]]=1;//방문처리 하고,
                Q[++back]=map[x][i];//큐의 다음back위치에 해당 노드를 자료로 넣어준다
            }
        }
    }
    return 0;
}
