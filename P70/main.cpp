//
//  main.cpp
//  P70
//
//  Created by hyeryoung on 2021/11/02.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
//그래프 최단거리(BFS)
int ch[30], dis[30];//distance1차원배열 : 1번정점에서 각 정점까지의 최소 간선의 개수 기록
int main(int argc, const char * argv[]) {
    int n, m, a, b, x, i;
    vector<int> map[30];
    queue<int> Q;//큐 생성
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d", &a, &b);
        map[a].push_back(b);//방향그래프
    }
    Q.push(1);//출발정점(1)을 큐에 자료로 넣어준다(push).
    ch[1]=1;//1번정점 방문체크
    while(!Q.empty()){//큐가 비워질 때 까지 반복
        x=Q.front();//front:큐의 가장 앞에있는 값을 참조해서 x값에 저장
        Q.pop();//자료를 꺼내준다.(선입선출)
        for(i=0; i<map[x].size(); i++){//x정점과 연결되어있는 정점들의 갯수(size)
            if(ch[map[x][i]]==0){//x와 연결되어있는 i번째 리스트의 점을 방문하지 않았다면
                ch[map[x][i]]=1;//방문체크하고,
                Q.push(map[x][i]);//해당 정점을 큐에 push해준다
                dis[map[x][i]]=dis[x]+1;//x와연결되어있는 점은 간선1개로 연결되어있다는 것을 의미
                //distance배열의 해당정점 인덱스에 [distance배열의x번째인덱스값(x까지의 최소 간선갯수)에 간선을 하나 더 추가한 값] 1을 더해준다.
            }
        }
    }
    for(i=2; i<=n; i++){
        printf("%d : %d\n", i, dis[i]);
    }
    return 0;
}
