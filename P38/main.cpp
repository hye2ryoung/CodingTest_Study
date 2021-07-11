//
//  main.cpp
//  P38
//
//  Created by hyeryoung on 2021/07/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
int main(int argc, const char * argv[]) {
    int i, j, pos, n;
    scanf("%d", &n);
    vector<int> a(n+1), b(n+1);
    for(i=1; i<=n; i++){
        scanf("%d", &a[i])
    }
    for(i=n; i>=1; i--){
        pos=i;
        for(j=1; j<=a[i]; j++){
            b[pos]=b[pos+1];
            pos++;
        }
        os[pos]=i;
    }
    for(i=1; i<=n; i++) printf("%d ",&b[i]);
    return 0;
}
