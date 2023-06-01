//
//  main.cpp
//  P20
//
//  Created by hyeryoung on 2021/06/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, a[101], b[101];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==b[i])
            printf("D\n");
        else if((a[i])==1 && (b[i])==3)
            printf("A\n");
        else if((a[i])==2 && (b[i])==1)
            printf("A\n");
        else if((a[i])==3 && (b[i])==2)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}

