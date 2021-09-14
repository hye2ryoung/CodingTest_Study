//
//  main.cpp
//  ArrayGame
//
//  Created by hyeryoung on 2021/09/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int n;
int CountMoves(int numbers[n]){
    int i, max=-2147000000, select;
    for(i=0;i<n;i++){
        if(numbers[i]>=max){
            max=numbers[i];
            select=i;
        }
    }
    for(i=0;i<n;i++){
        if(i==select){
            continue;
        }
        numbers[i]++;
    }
    return ;
}

int main(int argc, const char * argv[]) {
     int i
    return 0;
}
