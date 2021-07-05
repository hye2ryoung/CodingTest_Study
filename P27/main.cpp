//
//  main.cpp
//  P27
//
//  Created by hyeryoung on 2021/07/01.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>

int main(int argc, const char * argv[]) {
    int i, j, n, tmp;
    scanf("%d", &n);
    std::vector<int> ch(n+1); //소수를 카운팅하는 check박스 생성
    
    for(i=2;i<=n;i++)//소인수분해
    {
        tmp = i; //i를 쪼개야하므로 tmp에 저장해서 진행
        j=2; //가장 작은 소수 2부터(초기화)
        while(1)
        {
            if(tmp%j==0){//만약 tmp가 j로나누어떨어지면
                tmp = tmp/j;//tmp를 j로 나누고
                ch[j]++;//j를 카운팅(소수 카운팅)
                
                //while문을 계속 돌면서 예를들어 2와 3으로 이루어진 4나 6같은 수들은 2와 3으로 나누어질 수 있을때까지 계속 나누어지게 되므로 j를 증가시키면서 확인하면 된다(소수가 아닌 수들은 알아서 걸러진다)
            }
            else j++; //tmp가 j로 안나누어떨어지면 j를 1 증가
            if(tmp==1) break; //다 나누어 떨어지면 while문 탈출
        }
    }
    printf("%d! = ", n);
    for(i=2;i<=n;i++)
    {
        if(ch[i]!=0)//인덱스값이 0인것은 빼고(소수가 아님) 카운팅된 소수의 개수들만 출력
            printf("%d ", ch[i]);
    }

   
    
    return 0;
}
