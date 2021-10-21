//
//  main.cpp
//  P68
//
//  Created by hyeryoung on 2021/10/21.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//최소 비용(DFS : 가중치 방향그래프 인접리스트)
int ch[21], cost=2147000000, n;
// <pair<> > 한 칸 띄는 이유 : >>쉬프트연산과 유사하여 에러날수있으므로 > >한칸 띈다.
vector<pair<int, int> > map[21];
//pair 자료구조 : STL에서 제공. 두 개의 데이터형을 한 쌍으로 묶어서 관리
//pair<int, int> p;
//p.first, p.second로 접근
//노드를 생성하고 값 넣기 : make_pair
//p=make_pair(10, 20);

void DFS(int v, int sum){
    int i;
    if(v==n){
        if(sum<cost){
            cost=sum;
        }
    }
    else{
        for(i=0;i<map[v].size();i++){
            if(ch[map[v][i].first]==0){
                //가중치의 값이0보다 크고 방문하려는 연결노드가 아직방문되지않았다면(0)
                ch[map[v][i].first]=1;//방문체크
                DFS(map[v][i].first, sum+map[v][i].second);//v에연결된 i번노드와 가중치의 누적값을 DFS에 돌린다(경로가 뻗어나가야 하니까)
                ch[map[v][i].first]=0;//v에연결된i노드의 방문체크를 다시 0으로 푼다(정점n에 도달해서 경로를카운팅하고나면 스택에서 빠지기 전에 해당정점 방문을 초기화해야 하므로)
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int m, i, a, b, c;//a(출발점)b(도착점)c(가중치)
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d %d", &a, &b, &c);
        //인접 리스트
        map[a].push_back(make_pair(b,c));
        //b정점 : 인접리스트 first값
        //가중치 : 인접리스트 second값
    }
    ch[1]=1;
    DFS(1, 0);
    printf("%d\n", cost);
    return 0;
}
