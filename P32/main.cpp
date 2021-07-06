//
//  main.cpp
//  P32
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//선택정렬
//첫번째 자료와 [두번째~마지막 자료]를 차례대로 비교하여 최소값을 찾아 첫번째에 놓고,
//두번째 자료와 [세번째~마지막 자료]를 비교하여 최소값을 두번째에 놓고
//세번째 자료...
int main(int argc, const char * argv[]) {
    int n, a[100], i, j, tmp, idx;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++){
        idx=i;//인덱스를 가리키는 값을 i라고 지정
        for(j=i+1; j<n; j++){//j는 i(idx이기도 함)의 다음값. 증가시키면서 비교
            if(a[j]<a[idx]){//idx값보다 (다음값)j가 더 작으면
                idx=j;//인덱스를 가리키는 값을 j로 바꿔주고 for문으로돌아가서 j를증가시킨값과 다시비교
            }
        }//for문을 다 돌고나면 idx가 가리키는 값은 i부터~끝까지 비교했을때 최소값을 가리키고 있다.
        //a[i]와 a[idx] swap
        tmp = a[i];//temp에 i값을 저장하고
        a[i] = a[idx];//i에 최소값 idx을 넣는다
        a[idx] = tmp;//원래 i값을 idx에 저장
    //다시 for문으로 돌아가서 i값 증가
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
