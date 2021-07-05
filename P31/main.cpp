//
//  main.cpp
//  P31
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[10];
    int c=0, h=0, i, pos; //c(C개수) h(H개수) pos(H의위치)
    scanf("%s", &a);
    if(a[1]=='H'){//C가1개일때 (숫자1생략하고 a[1]자리에 바로 H가 들어옴)
        c=1;
        pos=1;//H의위치 1에저장
    }
    else{
        for(i=1; a[i]!='H'; i++) //C(a[0])의 숫자를 읽음 (H가나오기전까지)
        {
            c = c*10+(a[i]-48); //아스키넘버 -48처리
        }
        pos=i;//H의위치 i에저장(for문마지막에 i++처리되므로)
    }
    if(a[pos+1]=='\0') h=1; //H가1개일때
    else{
        for(i=pos+1; a[i]!='\0'; i++)
        {
            h = h*10+(a[i]-48); //아스키넘버 -48처리
        }
    }
    printf("%d\n", c*12+h); //총 질량 구하기
    return 0;
}
