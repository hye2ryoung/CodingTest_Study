//
//  main.cpp
//  P13
//
//  Created by hyeryoung on 2021/06/28.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//ch[]은 전역변수로 선언되어있기 때문에 값이 0으로 초기화 되어 있는 상태
int ch[10]; //0~9 각 자릿수 카운팅
int main(int argc, const char * argv[]) {
    int i, digit, max=-2147000000, res;
    char a[101];
    scanf("%s", a);
    for(i=0; a[i]!='\0'; i++)
    {
        digit=a[i]-48; //실제 숫자값을 만들어주기위해 아스키값 - 48
        ch[digit]++; //자릿수 카운트 증가
    }
    for(i=0;i<=9;i++)
    {
        if(ch[i]>=max) //0~9까지 차례대로 for문이 도니까 최대값이 크거나 "같다"고 지정하면 카운트가 같더라도 더 큰 자릿수를 최대값으로 지정
        {
            max=ch[i]; //카운팅된 자릿수의 최댓값 지정
            res=i; //0~9중에서 가장 큰 자릿수를 결과값으로 지정
        }
    }
    printf("%d",res);
    return 0;
}
