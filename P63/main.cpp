//
//  main.cpp
//  P63
//
//  Created by hyeryoung on 2021/10/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//인접행렬(가중치 방향 그래프)
int map[21][21];
int main(int argc, const char * argv[]) {
    int n, m, i, j, a, b, c;//a(출발점)b(도착점)c(가중치)
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d %d", &a, &b, &c);
        //방향그래프일경우
        map[a][b]=c;
        //가중치가 없는 경우 map[a][b]=1;
        //무방향 일 경우 map[b][a]=c;도 추가해줘야 한다.
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");//puts("")
    }
    return 0;
}
