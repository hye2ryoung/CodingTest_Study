//
//  main.cpp
//  P35
//
//  Created by hyeryoung on 2021/07/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//버블정렬 응용
int main(int argc, const char * argv[]) {
    
    int n, a[100], i, j, tmp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>0 && a[j+1]<0){ //현재값이 양수고, 다음값이 음수이면 swap처리해서 음수가 차례대로 왼쪽에, 양수가 차례대로 오른쪽에 위치하게된다.
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
