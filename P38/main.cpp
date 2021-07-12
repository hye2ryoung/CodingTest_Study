//
//  main.cpp
//  P38
//
//  Created by hyeryoung on 2021/07/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
//삽입정렬 코드스타일
int main(int argc, const char * argv[]) {
    int i, j, pos, n;
    scanf("%d", &n);
    std::vector<int> a(n+1), b(n+1);
    //a배열(Inversion Sequence) ex) 5 3 4 0 2 1 1 0
    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(i=n; i>=1; i--){ //n부터 1인덱스까지 거꾸로 확인
        pos=i;//포지션을 i(n~1)로 지정
        for(j=1; j<=a[i]; j++){//확인하려는 a배열 인덱스(n~1순서)의 앞에(1부터n이전까지의자리) i보다 큰 수가 몇개있는지 확인해서 그 숫자만큼 앞으로 땡긴다. a[i]보다뒤에있는 수는 확인할 필요가없다.
            b[pos]=b[pos+1];
            pos++;//포지션을 1증가시키면서 하나씩 앞으로 땡긴다(a[i]의 숫자만큼)
        }
        b[pos]=i;//for문을 돌면서 앞으로 모두 땡기고 난 후 ++된 pos의 위치에(땡기고난 바로 다음 인덱스에) 확인하려는 i번째 숫자를 넣어준다.
    }
    for(i=1; i<=n; i++){
        printf("%d ",b[i]);//예시입력값의 결과값 4 8 6 2 5 1 3 7
    }
    return 0;
}
