//
//  main.cpp
//  P50
//
//  Created by hyeryoung on 2021/08/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//영지(territory) 선택 (small : 2차원 배열 브루트포스)
int a[51][51];
int main(int argc, const char * argv[]) {
    int h, w, n, m, i, j, k, s, sum=0, max=-2147000000;
    scanf("%d %d", &h, &w);//전체영지 세로,가로길이
    for(i=1; i<=h; i++){
        for(j=1; j<=w; j++){
            scanf("%d", &a[i][j]);//오렌지 나무 개수 정보 입력
        }
    }
    scanf("%d %d", &n, &m);//현수가 하사받을 영지크기 세로,가로길이
    
    //4중for문을 통해 나무개수를 모두 세어준다
    //1,1꼭지점부터 끝꼭지점까지 전부 세어줄필요는 없으므로 하사받는영지크기의 마지막범위 시작점까지만 탐색
    //(전체높이 h) - (현수영지 세로 n) + 1
    //(전체너비 w) - (현수영지 가로 m) + 1
    for(i=1; i<=h-n+1; i++){
        for(j=1; j<=w-m+1; j++){
            sum=0;
            //현수영지의 나무개수 탐색
            //시작점i부터 현수영지세로n을 더한지점 전까지,
            //시작지점j부터 현수영지가로m을 더한지점 전까지 탐색
            for(k=i; k<i+n; k++){
                for(s=j; s<j+m; s++){
                    sum=sum+a[k][s];//영지에있는 나무개수의 합 sum
                }
            }
            if(sum>max){
                max=sum; //나무개수의 최대개수 구하기
            }
        }
    }
    printf("%d\n", max);
     
    return 0;
    
}
