//
//  main.cpp
//  P28
//
//  Created by hyeryoung on 2021/07/01.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, cnt2=0, cnt5=0, i, j, tmp;
    scanf("%d", &n);
    
    for(i=2;i<=n;i++)//소인수분해
    {
        tmp = i; //i를 쪼개야하므로 tmp에 저장해서 진행
        j=2; //가장 작은 소수 2부터
        while(1)
        {
            if(tmp%j==0){//만약 tmp가 j로나누어떨어질 때
                if(j==2) cnt2++; //j가 2라면 2카운팅
                if(j==5) cnt5++; //j가 5면 5카운팅
                tmp = tmp/j;//tmp를 j로 나누고
        
            }
            else j++; //tmp가 j로 안나누어떨어지면 j를 1 증가
            if(tmp==1) break; //다 나누어 떨어지면 while문 탈출
        }
    }
    // *10의 개수만큼 일의자리부터 연속적으로 0이 몇개 있는지 표현되므로
    // 2의 개수, 5의 개수를 비교해서 개수가 더 작은 카운트를 출력
    if(cnt2<cnt5) printf("%d", cnt2); //cnt5가 더 많으면 cnt2(10의개수와같다)출력
    else printf("%d", cnt5); //cnt2가 더 많거나 같은(딱떨어지는) 경우 cnt5 출력
    
    return 0;
}
