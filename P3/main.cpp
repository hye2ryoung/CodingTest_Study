//
//  main.cpp
//  P3
//
//  Created by hyeryoung on 2021/06/22.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int n, i, sum=1; //sum도 1포함
    cin>>n;
    cout<<"1"; //1은 무조건 포함
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            cout<<" + "<<i;
            sum += i;
        }
    }
    cout<<" = "<<sum;
    return 0;
}
