//
//  main.cpp
//  P75
//
//  Created by hyeryoung on 2023/08/05.
//  Copyright © 2023 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
struct Data{//구조체 생성
    int money;
    int when;
    Data(int a, int b){//매개변수가 있는 생성자를 생성
        money=a;
        when=b;
    }
    bool operator<(const Data &b)const{//정렬기준을 설정
        return when>b.when;//앞의값>뒤의값 내림차순 정렬(날짜(b)에 의한 정렬, money(a)값은 따라다님
    }
};
int main(int argc, const char * argv[]) {
    int n, i, j, a, b, res=0, max=-2147000000;
    vector<Data> T;//구조체(Data)를 저장할 수 있는 vector T
    priority_queue<int> pQ;
    scanf("%d", &n);//강연 갯수 입력
    for(i=1; i<=n; i++){
        scanf("%d %d", &a, &b);
        T.push_back(Data(a, b));//강연료, 날짜를 생성자로 호출해서 vector에 push back
        if(b>max)
            max=b;//마지막 강연날짜 부터 훑으면서 높은 가격을 책정해야하므로 max에 날짜(b값)를 넣어준다
    }
    sort(T.begin(), T.end());
    j=0;//j초기화를 여기서 먼저 해준다
    for(i=max; i>=1; i--){//마지막 강연날짜부터 내림차순으로 for문을 돌려준다
        for( ; j<n; j++){//초기화 생략, 0부터 n-1까지 n번(강의날짜만큼) for문을 돌려준다
            if(T[j].when<i) break;//만약 강연날짜i가 vector T안에 정렬된 날짜들(T[j].when)보다 작으면 pQ에 넣지 않는다
            pQ.push(T[j].money);//강연날짜 i가 T안에 정렬된 날짜들보다 크거나 같을 때 pQ에 money(강연료)를 push한다
        }
        if(!pQ.empty()){
            res+=pQ.top();//pQ의 루트값을 결과값 res에 더해준다
            pQ.pop();
        }
    }
    printf("%d\n",res);
    return 0;
}
