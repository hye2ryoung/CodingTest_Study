//
//  main.cpp
//  P36
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//삽입정렬
//자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교 하여, 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘
//자료가 삽입될 위치를 찾았다면 그 위치에 자료를 삽입하기 위해 자료를 한 칸씩 뒤로 이동시킨다.
int main(int argc, const char * argv[]) {
    int n, a[100], i, j, tmp;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=1; i<n; i++){
        tmp=a[i];//tmp에 a[i]값 저장. 0번째 다음 인덱스 a[1]부터 저장
        for(j=i-1; j>=0; j--){
            if(a[j] > tmp){//(인덱스0~i-1의)비교값 a[j]이 tmp값보다 크면
                a[j+1]=a[j];//비교값을 한 칸 뒤로 복사
            }
            else break;
        }
        a[j+1] = tmp;
        //j=0까지 for문이 끝나고 나면(j=-1) tmp값을 a[j+1]에 저장(a[0]에 저장)
        //중간에 조건문을 충족하지 않아서 break로 for문이 끝나면 해당 j값으로 a[j+1] = tmp; 실행
    }
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
