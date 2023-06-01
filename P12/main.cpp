//
//  main.cpp
//  P12
//
//  Created by hyeryoung on 2021/06/25.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //숫자의 총 개수
    //1자리 수 : 1 * 9개 ( 1 ~ 9 )
    //2자리 수 : 2 * 90개 ( 10 ~ 99 )
    //3자리 수 : 3 * 900개 ( 100 ~ 999 )
    //4자리 수 : 4 * 9000개 ( 1000 ~ 9999 )
    //1. 입력한 숫자와 각 자리수의 개수(누적된 각 자리수 9개 99개 999개...)를 비교했을 때 입력한 수가 더 큰 지점을 기점으로 아래단계까지의 누적 자리수 개수를 뺀다.
    //ex) 256 : 256 - 99 = 157
    //2. 1번의 결과값에 해당 숫자의 자릿수만큼 곱한 것과 나머지 누적 자리수의 총 숫자 개수를 더하여 총 숫자의 개수를 구한다.
    //ex) (157 * 3) + ((1*9) + (2*90))
    
    int n, sum=0, cnt=1, d=9, res=0;
    //n숫자 sum자리수의개수누적값 cnt자리수 d자리수의개수 res결과값
    scanf("%d",&n);
    while(sum+d<n)//입력값이 각 자리수의 개수의 누적값보다 크다면(9, 99, 999...)
    {
        res=res+(cnt*d);//결과값은 자리수*자리수의개수의 누적(숫자의 총 개수)
        sum=sum+d;//자리수의개수누적값에 입력값보다 낮은 자리수의개수를 더해줌
        cnt++;//자리수 증가시켜줌
        d=d*10;//자리수의 개수도 증가
    }
    //입력값이 각 자리수의 개수의 누적값보다 작을 때(while문에서 빠져나오면)
    res=res+((n-sum)*cnt);//결과값은 ( 입력값 자리수 아래단계까지의 숫자의 총 개수 + (입력값 - 입력값보다 아래단계까지의 누적 자리수 개수) * 입력값 자리수 개수)
    printf("%d",res);
    return 0;
    
}
