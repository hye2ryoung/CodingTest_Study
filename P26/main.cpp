//
//  main.cpp
//  P26
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
int main(int argc, const char * argv[]) {
    int n, i, j, res;
    scanf("%d", &n);
    std::vector<int> a(n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("1 "); //맨처음 출력값은 항상 1(1등)
    for(i=1; i<n; i++)
    {
        res=1; //등수는 모두 1에서 출발(초기값)
        for(j=i; j>=0; j--) //a배열의0번째 인덱스를 제외하고 1~n-1까지 i, i번째에서 0번째(처음)까지 j일 때
        {
            if(a[j]>a[i]) res++; //1번째 인덱스 부터 n-1인덱스 까지 각각의 i인덱스와 0~i인덱스 값(j)을 비교했을 때 [0~i인덱스중에서 i인덱스보다 더 큰 값이 있을때마다] 카운팅 (a[i]번째와 대응되는 res가 카운팅됨)
        }
        printf("%d ", res); //맨처음 값을 제외한 카운팅된 등수 출력
    }
    return 0;
}
