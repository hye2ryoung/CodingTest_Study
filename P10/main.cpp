//
//  main.cpp
//  P10
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int digit_sum(int x){
    int tmp, sum=0;
    while(x>0)
    {
        tmp = x%10; //자연수를 10으로 나눈 나머지(1의자리)
        sum += tmp; //sum에 tmp 누적
        x = x/10; //1의자리를 제외한 자릿수 x가 다시 while문으로 들어감
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    int n, num, i, sum, max=-2147000000, res;
    scanf("%d", &n); //자연수개수 n
    for(i=0; i<n; i++)
    {
        scanf("%d", &num); //자연수 num
        sum = digit_sum(num); //자연수의 각 자릿수 합 sum
        
        if(sum>max)
        {
            max=sum; //sum을 최대값으로 지정
            res=num; //자연수를 결과값으로 지정
        }
        else if(sum==max) //sum이 기존의 최대값과 같을 때
        {
            if(num>res) //기존 결과값보다 자연수가더 크다면
                res=num; //(더 큰)자연수를 결과값으로 지정
        }
    }
    printf("%d",res);
    
    
    return 0;
}
