//
//  main.cpp
//  P14
//
//  Created by hyeryoung on 2021/06/28.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//뒤집기
int reverse(int x)
{
    int tmp, res=0;
    while(x>0)
    {
        tmp=x%10; //자연수를 10으로 나눈 나머지(1의자리)
        res=(res*10)+tmp; //나머지를 더한 결과값에 10을 곱하여 다음 나머지를 더하는 식으로 reverse
        x=x/10; //1의자리를 제외한 자릿수 x가 다시 while문으로 들어감
    }
    return res;
}
//소수인지 확인
bool isPrime(int x)
{
    int i;
    bool flag=true;
    
    //만약 x가 1이라면 1은 소수가 아니기 때문에 예외처리
    if(x==1) return false;
    
    for(i=2;i<x;i++) //1과 자기자신 제외
    {
        if(x%i==0) //소수가 아닐때 false
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {
    int n, i, num, tmp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        tmp=reverse(num);//num을 뒤집고
        if(isPrime(tmp))//만약 소수라면 출력
            printf("%d ",tmp);
    }
    return 0;
}
