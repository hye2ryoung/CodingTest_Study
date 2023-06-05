//
//  main.cpp
//  P34
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//버블정렬
//인접한 인덱스끼리 비교 후 교환하면서 정렬
//한바퀴 돌고나면 최대값이 맨 뒤로 정렬되기때문에, 맨 뒤 인덱스를 제외하고 2회전 후, 끝에서두번째자료 제외하고 3회전...
int main(int argc, const char * argv[]) {
    int n, a[100], i, j, tmp;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){ //j의 범위가 마지막인덱스(n-1)보다 i만큼 작은 인덱스를 제외해가면서 증가한다
            if(a[j]>a[j+1]){//0부터 순차적으로 다음인덱스를 비교, 마지막바로전인덱스((n-1-i)-1) j와 마지막 인덱스(n-1-i) j+1까지 비교한다. i가 증가할수록(1회전,2회전...할수록) 마지막 인덱스도 하나씩 제외된다.(j의범위가 i씩감소(i는1씩증가하므로 하나씩 제외))
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}
