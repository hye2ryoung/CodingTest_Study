//
//  main.cpp
//  P42
//
//  Created by hyeryoung on 2021/07/13.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//이분검색(이진탐색)
//데이터가 정렬돼 있는 배열에서 특정한 값을 찾아내는 알고리즘
//배열의 중간에 있는 임의의 값을 선택하여 찾고자 하는 값 X와 비교한다. X가 중간 값보다 작으면 중간 값을 기준으로 좌측의 데이터들을 대상으로, X가 중간값보다 크면 배열의 우측을 대상으로 다시 탐색한다.
//동일한 방법으로 다시 중간의 값을 임의로 선택하고 비교한다. 해당 값을 찾을 때까지 이 과정을 반복한다.
int main(int argc, const char * argv[]) {
    
    int n, m, i, mid, lt=0, rt; //lt : 맨처음값으로 초기화 0번인덱스
    scanf("%d %d",&n,&m);
    vector<int> a(n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    rt=n-1;//rt : 오른쪽끝값(n-1인덱스)으로 초기화
    
    while(lt<=rt){//만약 찾고자하는 자료가 존재하지 않는다면 while문 종료
        mid=(lt+rt)/2;
        if(a[mid]==m){
            printf("%d\n",mid+1);//인덱스0이 시작이라서 mid+1번째 값을 출력
            return 0;//찾으면 프로그램 종료
        }
        else if(a[mid]>m) rt=mid-1;//찾고자하는값(m)이 mid값도 아니므로 mid-1로 처리
        else if(a[mid]<m) lt=mid+1;
    }
    return 0;
     
}
