//
//  main.cpp
//  P46
//
//  Created by hyeryoung on 2021/08/04.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//멀티태스킹(카카오 먹방 문제 변형)
int main(int argc, const char * argv[]) {
    int n, k, i, pos=0, cnt=0, sum=0;
    scanf("%d", &n);//작업 n개
    vector<int> a(n+1);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]); //각 작업 소요시간 입력
        sum = sum + a[i]; //누적 소요시간 sum
    }
    scanf("%d", &k);//작업시작 k초 후에 중단
    
    if(k>=sum){
        printf("-1\n");//누적 소요시간sum이 정전 발생시간 k초보다 같거나 작으면 -1출력
        return 0;//하고 종료
    }
    
    while(1){
        pos++;//pos를 1부터 증가시키다가 n(작업 수)을 넘었을 때 pos=1으로 초기화
        if(pos>n) pos=1;
        if(a[pos]==0) continue;//만약 pos이 위치한 값이 0이면 작업스케줄에서 제외되므로 넘어간다(continue : while문 처음으로 넘어간다)
        a[pos]--;//pos이 가지고있는 값(작업 소요시간)을 1초씩 처리한다
        cnt++;//처리한 시간 카운팅
        if(cnt==k) break; //처리한 시간이 정전 발생시간과 같아지면 break(중단)
    }
    while(1){
        pos++;//정전 이후의 작업을 처리할 차례
        if(pos>n) pos=1;
        if(a[pos]!=0) break;//pos의 값이 0이 아닌것을 찾아서
    }
    printf("%d\n",pos);//몇번째(pos) 작업인지 출력한다
    
    return 0;
}
