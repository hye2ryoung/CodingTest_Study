//
//  main.cpp
//  P48
//
//  Created by hyeryoung on 2021/08/05.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//각 행의 평균과 가장 가까운 값

int a[10][10];

int main(int argc, const char * argv[]) {
    int i, j, avg, res, sum, tmp, min=2147000000;
    for(i=1; i<=9; i++){
        sum=0;//행 i마다 sum 0으로 초기화
        
        for(j=1; j<=9; j++){
            scanf("%d", &a[i][j]);
            sum=sum+a[i][j];//i번째 행의 j열들의 누적합을 sum에 저장해둔다
        }
        avg = (sum/9.0)+0.5;//실수형 평균값에 0.5를 한다음 정수형avg로 나타내면 소수점이 날아가므로 반올림하려면 실수형 9.0으로 나누고 0.5를 더한다.
        printf("%d ", &avg);//평균값 먼저 출력
        
        for(j=1; j<=9; j++){
            tmp=abs(a[i][j]-avg);//임시변수에 평균과 i번째 행의 j열들의 차(절대값 abs)를 저장한다
            if(tmp<min){
                min=tmp;//차이가 가장 적은 최소값을 찾는다
                res=a[i][j];//차이의 최소값을 가지고 있는 해당 인덱스를 결과값으로 지정
            }
            else if(tmp==min){//여태까지의 최소값과 새로발견한 차이값이 같을때
                if(a[i][j]>res) res=a[i][j]; //새로운값이 더 크다면 큰값을 결과값으로 지정
            }
        }
        printf("%d\n", &res);
    }
   
    return 0;
}
