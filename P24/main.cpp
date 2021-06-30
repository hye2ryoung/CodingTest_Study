//
//  main.cpp
//  P24
//
//  Created by hyeryoung on 2021/06/30.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
int main(int argc, const char * argv[]) {
    int n, i, pre, now, pos;
    scanf("%d", &n);
    std::vector<int> ch(n); //1~n-1값을 배열의 인덱스번호화 해서 체크
    scanf("%d", &pre);
    for(i=1; i<n; i++)
    {
        scanf("%d", &now);
        pos=abs(pre-now); // abs : 절대값 -> #include <algorithm>
        if(pos>0 && pos<n && ch[pos]==0) ch[pos]++;
        //두 수의 차(pos)가 1~n-1이고 ch배열의 pos번째 인덱스가 아직 카운팅되지 않았을 경우 1로 카운팅
        else
            //위의 조건을 모두 충족하지 못했을 경우 jolly jumper가 아님
        {
            printf("NO\n");
            return 0;//프로그램 종료
        }
        pre=now;
    }
    printf("YES\n");
    //프로그램이 종료되지 않고 조건문을 통과해서 for문을 빠져나왔다면 jolly jump(YES)
    
    
    return 0;
}
