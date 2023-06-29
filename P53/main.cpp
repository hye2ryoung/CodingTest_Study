//
//  main.cpp
//  P53
//
//  Created by hyeryoung on 2021/08/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
/*
//stack(후입선출)
int stack[100], top=-1;//스택의 맨 위 지점 top을 -1로 초기화시켜준다
void push(int x){
    stack[++top]=x;//스택의 맨 위의 지점에 값을 넣는다(가리키고있던 위치에서 다음으로 ++한다음 값을 넣음)
    //top값이 -1이므로 처음 push하면 0지점부터 값을 넣게된다
}
int pop(){
    return stack[top--];//스택 맨 위 지점 값을 뽑아내고 가리키고있던 위치에서 밑으로 --해준다
}
*/
//K진수 출력
int main(int argc, const char * argv[]) {
    
    int n, k;
    stack<int> s;//스택 s 생성
    char str[20]="0123456789ABCDEF";
    scanf("%d %d", &n, &k);
    while(n>0){
        s.push(n%k);//나머지를 stack에 push한다(ex. 11을2진수로 나타낼때 2로나눈 몫의 순서는 5 2 1 0, 나머지는 1 1 0 1)
        n=n/k;//몫이 0이 될때까지 push 반복
    }
    while(!s.empty()){
        //스택.empty()함수 : 스택이 비어있으면 참을 return, 그렇지 않으면 거짓을 return하는 함수
        //not연산자 !를 붙이면 반대의 의미가 되므로 스택이 비워지게 될 때 까지 while문을 돌게된다.
        
        printf("%c", str[s.top()]);//스택.top()함수 : 스택의 top값을 return해주는(참조만 하는)함수
        s.pop();//pop으로 스택에 쌓인 값을 끄집어내준다(후입선출)
        
        //stack을 pop해서 나온 값에 해당되는 str배열의 인덱스값을 출력한다. (ex. 31을 16진수로 나타낼때 stack에 15, 1이 쌓이므로 1,15 순서로 pop하게되면 str배열의 1, 15번째 인 1과 F가 출력된다.)
    }
    return 0;
}
