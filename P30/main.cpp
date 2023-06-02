//
//  main.cpp
//  P30
//
//  Created by hyeryoung on 2021/07/05.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, lt=1, cur, rt, k=1, res=0;
    //n(입력값) cur(3인지확인하려는자리) lt(cur기준 왼쪽) rt(cur기준 오른쪽) k(cur의 자릿수)
    //ex)n=5367, lt=536, cur=7, rt=0, k=1
    scanf("%d", &n);
    while(lt!=0){//lt가 0이 될 때까지 while문 반복
        lt = n/(k*10);
        cur = (n/k)%10;
        rt = n%k;
        
        if(cur>3){//cur이 3보다 클때 3의 개수 누적값 계산법
            res = res + ((lt+1) * k);
        }
        else if(cur<3){//cur이 3보다 작을때 3의 개수 누적값 계산법
            res = res + (lt * k);
        }
        else{//cur이 3일때 3의 개수 누적값 계산법
            res = res + ((lt * k) + (rt + 1));
        }
        k = k*10; //k증가(자릿수증가)
    }
    printf("%d", res);
    return 0;
    
}
