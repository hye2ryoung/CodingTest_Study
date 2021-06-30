//
//  main.cpp
//  P22
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//int a[100001]; 메모리 낭비가 심하므로 동적으로 수치를 잡으려면 vector 사용
#include <vector>

int main(int argc, const char * argv[]) {
    
    int n, k, i, sum=0, max=-2147000000;
    scanf("%d %d", &n, &k);
    std::vector<int> a(n); //n크기만큼의 a배열을 생성(std - 객체로 벡터를 생성해야 함)
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<k; i++) //맨 처음 값부터 k보다 작은 값 까지의 합 (최초의 sum)만 따로 계산
    {
        sum+=a[i];
    }
    max=sum;
    for(i=k; i<n; i++)//k부터 마지막 값 까지 계산
    {
        sum = sum + (a[i]-a[i-k]); //i번째 값을 더해주고, i-k번째 값을 빼는 것으로 다음 sum을 구함
        if(sum>max) max=sum; //for문을 도는 동안 max값 확인
    }
    
    
    printf("%d\n", max);
    return 0;
}
