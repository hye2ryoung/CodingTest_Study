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
            printf("A\n");
        else if(win==2)
            printf("B\n");
        else
            printf("D\n");
    }
    else if(acnt>bcnt) printf("A\n");
    else printf("B\n");
    
    return 0;
}
