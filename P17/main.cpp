//
//  main.cpp
//  P17
//
//  Created by hyeryoung on 2021/06/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, j, num, sum, res;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        sum=0;//학생마다 sum초기화
        scanf("%d %d", &num, &res);
        for(j=1; j<=num; j++)
        {
            sum+=j;
        }
        if(res==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
