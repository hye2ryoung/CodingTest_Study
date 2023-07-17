//
//  main.cpp
//  P65
//
//  Created by hyeryoung on 2021/10/20.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//미로탐색(2차원 배열 DFS)
int map[10][10], ch[10][10];
int dx[4]={-1,0,1,0};//방향배열 dx
int dy[4]={0,1,0,-1};//방향배열 dy
int cnt=0;
void DFS(int x, int y){
    int i, xx, yy;
    if(x==7 && y==7){//도착점에도달하면 경로 카운팅
        cnt++;
    }
    else{
        for(i=0;i<4;i++){//방향배열 처리
            xx=x+dx[i];
            yy=y+dy[i];
            //상하좌우를 훑는 중에 격자판을 벗어나는 경우에는 그냥 지나친다
            if(xx<1 || xx>7 || yy<1 || yy>7) continue;
            //가려는 지점이 통로(0)이고 방문하지않은 곳이라면
            if(map[xx][yy]==0 && ch[xx][yy]==0){
                ch[xx][yy]=1;//방문체크
                DFS(xx,yy);//다음경로로 나아간다
                ch[xx][yy]=0;//i정점 방문체크를 다시 0으로 푼다(도착지점에 도달해서 해당경로를카운팅하고나면 스택에서 빠지기 전에 해당지점 방문을 초기화해야 하므로)
            }
        }
    }
}
int main(int argc, const char * argv[]){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            scanf("%d", &map[i][j]);
        }
    }
    ch[1][1]=1;
    DFS(1,1);
    printf("%d\n", cnt);
    return 0;
}
