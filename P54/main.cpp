//
//  main.cpp
//  P54
//
//  Created by hyeryoung on 2021/08/19.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <stack>
using namespace std;
//올바른 괄호(STL stack 자료구조 활용)
int main(int argc, const char * argv[]) {
    char a[30];
    int i, cnt = 0;
    stack<char> s;
    
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++){
        s.push(a[i]);
    }
    while(!s.empty()){
        if(s.top()=='(') cnt++; //여는괄호면 +1
        else if(s.top()==')') cnt--; //닫는괄호면 -1
        if(cnt>0) break;
        //후입선출이므로 (로끝나면 안되니까 cnt>0이되면 break
        s.pop();
    }
    if(cnt==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
/* 답안코드
 // stack에 (를 push하고 )를만나면 pop하면서 한 쌍을 그때그때 비운다.
 // 문자열을 모두 입력했을 때 stack이 비어있다면 YES 출력
 // )차례여서 pop을 하려는데 stack이 이미 비워져 있는 경우 예외처리(NO출력)
 // flag로 (()))(와 같은 예외를 처리
 // 1. stack이 비워져있는데 )를 만났을 경우 break로 강제종료할 경우에는 flag가0인 경우와
 // 2. for문을 돌고나서 정상적으로 종료 되었을때 stack이 비워져있지 않을 경우 flagr가 1인 경우를 나누어 NO를 출력한다
 int main(){
     stack<char> s;
     char a[30];
     int i, flag=1;
     scanf("%s",a);
     for(i=0;a[i]!='\0';i++){
        if(a[i]=='(') s.push(a[i]);
        else{
            if(s.empty()){
                printf("NO\n");
                flag=0;
                break;
            }
            else s.pop()
     }
     if(s.empty() && flag==1) printf("YES\n");
     else if(!s.empty() && flag==1)printf("NO\n");
     return 0;
 }
 */


