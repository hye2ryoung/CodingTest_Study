//
//  main.cpp
//  P8
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[100];
    int i, cnt = 0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(') cnt++; //여는괄호면 +1
        else if(a[i]==')') cnt--; //닫는괄호면 -1
        if(cnt<0) break; //여는괄호개수 < 닫는괄호개수 면 break : 만약 ')('면 cnt가 0이어도 올바르지않음
    }
    if(cnt==0) printf("YES\n");
    else printf("NO\n");
    return 0;
    
}
