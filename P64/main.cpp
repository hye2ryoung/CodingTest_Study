//
//  main.cpp
//  P64
//
//  Created by hyeryoung on 2021/10/07.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//경로 탐색(DFS)
int map[21][21], ch[21], cnt=0, n;

void DFS(int v){
    int i;
    if(v==n){
        cnt++;
    }
    else{
        for(i=1;i<=n;i++){
            if(map[v][i]==1 && ch[i]==0){
                //정점v에서i로 갈수있고(1) 방문하려는정점i가 아직방문되지않았다면(0)
                ch[i]=1;//방문체크
                DFS(i);//i정점을 DFS에 돌린다(경로가 뻗어나가야 하니까)
                ch[i]=0;//i정점 방문체크를 다시 0으로 푼다(정점n에 도달해서 경로를카운팅하고나면 스택에서 빠지기 전에 해당정점 방문을 초기화해야 하므로)
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int m, i, a, b;//a(출발점)b(도착점)
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d", &a, &b);
        //방향그래프, 가중치가 없는 경우 map[a][b]=1;
        map[a][b]=1;
    }
    ch[1]=1;
    DFS(1);
    printf("%d\n", cnt);
    return 0;
}
