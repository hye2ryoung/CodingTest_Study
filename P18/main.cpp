//
//  main.cpp
//  P18
//
//  Created by hyeryoung on 2021/06/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m, i, max=-2147000000, num, cnt=0;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &num);
        if(num>m)
            cnt++;//기준치보다 측정치가 높으면 카운팅
        else
            cnt=0;//낮으면 카운트 초기화
        if(max<cnt)
            max=cnt;//최대 연속값을 max에 저장
    }
    if(max==0)
        printf("-1");//최대 연속값이 0이면 경보음이 안울렸다는 뜻
    else
        printf("%d", max);//최대 연속값 출력

    return 0;
}
