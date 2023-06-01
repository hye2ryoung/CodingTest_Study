//
//  main.cpp
//  P6
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char a[100];
    int res = 0, cnt = 0, i;
    scanf("%s", a);
    
    // '\0' : 문자열의 끝나는 지점에 들어있는 null문자
    for(i=0; a[i]!='\0'; i++)
    {
        //0~9 값만 뽑아낸다
        if(a[i]>=48 && a[i]<=57)
        {
            res = res * 10 + (a[i]-48);
        }
    }
    printf("%d\n", res);
    
    //약수 cnt
    for(i=1;i<=res;i++)
    {
        if(res%i==0) cnt++;
    }
    printf("%d\n",cnt);
    
    
    return 0;
    
}
