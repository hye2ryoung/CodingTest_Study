//
//  main.cpp
//  P4
//
//  Created by hyeryoung on 2021/06/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //freopen 채점할때는 주석처리
    freopen("input.txt", "rt", stdin); //option mode = read text(rt), 기본 입력 = stdin(cin)
    int n, i, a, max=-2147000000, min=2147000000; //min max 초기화
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a>max) max=a;
        if(a<min) min=a;
    }
    cout<<max-min;
    return 0;
    
}
