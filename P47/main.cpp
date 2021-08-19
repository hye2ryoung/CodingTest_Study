//
//  main.cpp
//  P47
//
//  Created by hyeryoung on 2021/08/05.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//봉우리
int a[52][52];//2차원 배열
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
//dx,dy배열을 각각 인덱스 순서대로 a배열의 행과 열에 더해주면 방향배열이 완성된다.
//시계방향 (위)a[i+(-1)][j+(0)] (오른쪽)a[i+(0)][j+(1)] (아래)a[i+(1)][j+(0)] (왼쪽)a[i+(0)][j+(-1)]
int main(int argc, const char * argv[]) {
    int n, i, j, k, cnt=0, flag;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            flag=0;
            for(k=0; k<4; k++){
                if(a[i][j]<=a[i+dx[k]][j+dy[k]]){ //dx,dy배열을 각각 행과 열에 더해서 네 방향의 숫자보다 현재좌표가 작거나 같으면(봉우리가 아니면) break
                    flag=1;//봉우리가 아닌경우 flag는 1
                    break;
                }
            }
            if(flag==0) cnt++; //flag 0일때는 봉우리인 경우이므로 개수 카운팅
        }
    }
    printf("%d\n",cnt);//카운팅된 봉우리 개수 출력
    
    return 0;
}
