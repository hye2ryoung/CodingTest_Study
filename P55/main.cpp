//
//  main.cpp
//  P55
//
//  Created by hyeryoung on 2021/08/19.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;
//기차운행(stack 응용)
int main(int argc, const char * argv[]) {
    int n, m, i, j=1;//j를 1~n까지 증가시키면서 stack의 입력값들과 비교해준다.
    stack<int> s;
    scanf("%d", &n);
    vector<char> str;//출력값 (P,O)저장할 문자열(공간이 없는 상태)
    for(i=1; i<=n; i++){
        scanf("%d", &m); //출발하는 기차번호순 입력
        s.push(m);//stack에 push해준다
        str.push_back('P');//출력값에 P(push) 저장(.push_back()을 사용하면 str에 공간이 한칸 생기면서 'P'가 들어가는 원리)
        while(1){
            if(s.empty()) break;//예외처리 : 순서배열과 스택이 맞아떨어져서 계속 비워져나가다가 empty되었을 때 break해준다.
            if(j==s.top()){
                s.pop();//순서배열의pos값과 스택의top이 일치하면 pop하고 pos++
                str.push_back('O');//출력값에 O(pop) 저장
                j++;
            }
            else break;//일치하지 않다면 넘어가서 for문으로 돌아감
        }
    }
    if(!s.empty()) printf("impossible\n");
    else{
        for(i=0;i<str.size();i++){
            printf("%c", str[i]);//문자열이아니고 문자하나씩 for문돌면서 찍어내는것이기 때문에 %c
        }
    }
    return 0;
   
}
