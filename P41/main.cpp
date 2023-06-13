//
//  main.cpp
//  P41
//
//  Created by hyeryoung on 2021/07/12.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//연속된 자연수의 합
//n이 2개 이상의 연속된 자연수의 합으로 표현되려면
//2개가 연속된 경우, 3개가 연속된 경우 ... 늘려가면서 확인(i개)
//ex) n=15일 때
//2개가 연속된 경우
//(n-1-2)한 후 이 값(12)을 i개(2개)로 나눈 값을 1과 2에 각각 더한다(1+6=7, 2+6=8). 7+8=15(n)
//3개가 연속된 경우
//(n-1-2-3)한 후 이 값(9)을 i개(3개)로 나눈 값을 1,2,3에 각각 더한다(1+3=4, 2+3=5, 3+3=6). 4+5+6=15(n)

int main(int argc, const char * argv[]) {
    
    int n, a=1, i, cnt=0, tmp;
    scanf("%d",&n);
    tmp=n;//임시변수 tmp에 입력값 n 저장
    n--;//일단 1을 빼준다
    while(n>0){
        a++;
        n=n-a;//n-1은 위에서 처리했으므로 a를증가시키면서 (n-1)-2, ((n-1)-2)-3 ...
        if(n%a==0){//[뺄셈처리가 된 값]을 a로 나눈 값(몫)을 구한다(나누어떨어지는 경우인지 확인)
            for(i=1; i<a; i++){//몫을 a개(i개)이전까지의 값에 더하는 결과를 먼저 출력
                printf("%d + ", (n/a)+i);
            }
            printf("%d = %d\n", (n/a)+i, tmp);//마지막 i개(a개)를 마저 더해서 15를 만든다
            cnt++;//경우의 수를 세는 cnt 카운트
        }
    }
    printf("%d\n", cnt); //경우의 수 출력
    return 0;
    
}
