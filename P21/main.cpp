//
//  main.cpp
//  P21
//
//  Created by hyeryoung on 2021/06/29.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, a[10], b[10], win=0, acnt=0, bcnt=0;
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>b[i])
        {
            acnt+=3;
            win=1; //win : 마지막으로 이긴 결과를 저장 a가이기면 1 b가이기면 2
        }
        else if(a[i]<b[i])
        {
            bcnt+=3;
            win=2;
        }
        else
        {
            acnt+=1;
            bcnt+=1;
        }
    }
    printf("%d %d\n", acnt, bcnt);
    if(acnt==bcnt)//점수가 같을 경우
    {
        if(win==1)
            printf("A\n"); //마지막 승자 A
        else if(win==2)
            printf("B\n"); //마지막 승자 B
        else
            printf("D\n"); //모든 라운드에서 비긴 경우 무승부 D
    }
    else if(acnt>bcnt) printf("A\n");
    else printf("B\n");
    
    return 0;
}
