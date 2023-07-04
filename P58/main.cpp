//
//  main.cpp
//  P58
//
//  Created by hyeryoung on 2021/09/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//이진트리 깊이우선탐색(DFS:Depth First Serch)
void D(int v){
    if(v>7) return; //1부터 7까지의 node로 이루어진 이진트리
    else{
        //전위순회 1 2 4 5 3 6 7
        //printf("%d ", v);
        D(v*2);
        //중위순회 4 2 5 1 6 3 7
        //printf("%d ", v);
        D(v*2+1);
        //후위순회 4 5 2 6 7 3 1
        printf("%d ", v);
    }
}
int main(int argc, const char * argv[]) {
    D(1);
    return 0;
}
