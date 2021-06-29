//
//  main.cpp
//  P2
//
//  Created by hyeryoung on 2021/06/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, i, sum=0;
    cin>>a>>b;
    for(i=a; i<b; i++)
    {
        cout<<i<<" + ";
        sum += i;
    }
    cout<<b<<" = ";
    cout<<sum+b;
    
    return 0;
}
