//
//  main.cpp
//  P66
//
//  Created by hyeryoung on 2021/10/21.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//경로 탐색(방향그래프 인접 리스트:used Vector)
int ch[21], cnt=0, n;
vector<int> map[21];//벡터 생성

void DFS(int v){
    int i;
    if(v==n){
        cnt++;
    }
    else{
        for(i=0;i<map[v].size();i++){//map[v].size()는 map의 v에 연결되어있는 리스트의 크기
            if(ch[map[v][i]]==0){
                //map[v][i]는 map의 인덱스v에 연결되어있는 i번 노드(링크 리스트)
                //아직 방문 안했다면(0)
                ch[map[v][i]]=1;//방문체크(1)
                DFS(map[v][i]);//연결되어있는 노드를 DFS에 돌린다(경로가 뻗어나가야 하니까)
                ch[map[v][i]]=0;//v에연결된i노드의 방문체크를 다시 0으로 푼다(정점n에 도달해서 경로를카운팅하고나면 스택에서 빠지기 전에 해당정점 방문을 초기화해야 하므로)
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int m, i, a, b;//a(출발점)b(도착점)
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d", &a, &b);
        //인접리스트
        map[a].push_back(b);
    }
    ch[1]=1;
    DFS(1);
    printf("%d\n", cnt);
    return 0;
}
