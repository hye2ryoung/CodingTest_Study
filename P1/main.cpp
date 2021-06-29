//
//  main.cpp
//  P1
//
//  Created by hyeryoung on 2021/06/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n, m, i, sum=0;
    cin>>n>>m; //n과 m 차례대로 입력
    for(i=1; i<=n; i++)
    {
        if(i%m==0)
        {
            sum = sum+i;
        }
    }
    cout<<sum; //답을 출력
    return 0;
}
