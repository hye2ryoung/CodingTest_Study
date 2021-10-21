//
//  main.cpp
//  P67
//
//  Created by hyeryoung on 2021/10/21.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//최소비용(그래프 DFS)
int map[21][21], ch[21], cost=2147000000, n;

void DFS(int v, int sum){
    int i;
    if(v==n){
        if(sum<cost){
            cost=sum;
        }
    }
    else{
        for(i=1;i<=n;i++){
            if(map[v][i]>0 && ch[i]==0){
                //가중치의 값이0보다 크고 방문하려는정점i가 아직방문되지않았다면(0)
                ch[i]=1;//방문체크
                DFS(i, sum+map[v][i]);//i정점과 가중치의 누적값을 DFS에 돌린다(경로가 뻗어나가야 하니까)
                ch[i]=0;//i정점 방문체크를 다시 0으로 푼다(정점n에 도달해서 경로를카운팅하고나면 스택에서 빠지기 전에 해당정점 방문을 초기화해야 하므로)
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int m, i, a, b, c;//a(출발점)b(도착점)c(가중치)
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d %d", &a, &b, &c);
        //방향그래프,가중치 map[a][b]=c;
        map[a][b]=c;
    }
    ch[1]=1;
    DFS(1, 0);
    printf("%d\n", cost);
    return 0;
}
