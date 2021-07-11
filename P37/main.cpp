//
//  main.cpp
//  P37
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int s, n, i, j, a, b[10], pos;
    //s캐시의크기 n작업의개수
    scanf("%d %d", &s, &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        pos=-1;
        
        for(j=0;j<s;j++){ //캐시의 크기동안 배열b의 인덱스와 입력값중에 일치하는게 있는지 확인
            if(b[j]==a){
                pos=j;//같은게 있으면 pos에 해당인덱스값 j를 pos에 저장
            }
        }
        
        if(pos==-1){//pos가-1라면(통과)
            for(j=s-1; j>=1; j--){//배열의크기-1부터 1까지
                b[j]=b[j-1];//해당인덱스의 이전인덱스를 다음인덱스로 옮긴다
            }
        }else{//pos가 j가 된 경우
            for(j=pos; j>=1; j--){//같은값이있던위치(pos)부터 1까지
                b[j]=b[j-1];//해당 인덱스의 이전인덱스를 다음인덱스로 옮긴다
            }
        }
        b[j]=a;//b[0]에 입력값 저장(j는 for문을 1까지다 돌고 --되어 0인 상태)
        /*
        //캐시 메모리 상태변화
        for(i=0; i<s; i++){
            printf("%d ", b[i]);
        }printf("\n");
         */
    }
    for(i=0; i<s; i++){
        printf("%d ", b[i]);
    }
    
    return 0;
}
