//
//  main.cpp
//  P43
//
//  Created by hyeryoung on 2021/07/13.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//이분검색 응용 : 결정 알고리즘
int a[1001], n;//n : dvd에 들어있는 곡의 총 개수

/*
int Count(int size){//size: dvd용량(한개당)
    int i, cnt=1, sum=0;
    for(i=1;i<=n;i++){
        if(sum+a[i]>size){//i번째 곡을 추가했을때 용량초과라면
            cnt++;//dvd개수를 하나 더 카운팅하고
            sum=a[i];//i번째 곡 부터 새로운 dvd에 추가하겠다
        }
        else sum=sum+a[i];//용량초과하지않을경우 정상적으로 곡 누적
    }
    return cnt;//dvd 개수 return
}

int main(int argc, const char * argv[]) {
    int m, i, lt=1, rt=0, mid, res, max=-2147000000;//m:dvd개수
    scanf("%d %d",&n, &m);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
        rt=rt+a[i];//rt에 다음 값 누적
        if(a[i]>max) max=a[i]; //dvd용량이 최소한 곡 리스트 하나씩은 담을 수 잇어야 하므로, 하나의 곡 용량의 최댓값 max를 설정해주어 dvd용량이 max값보다는 크거나 같아야 함을 명시해줄것이다.
    }
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(mid>=max && Count(mid)<=m){//카운팅된 dvd개수가 [max보다 크거나 같고], [m보다 크지 않는(작거나 같은)] 선에서 최소 mid(용량)을 정한다
            res=mid;
            rt=mid-1;//더 작은 용량범위에서 다시 탐색하기위해 rt에 mid-1 저장
        }
        else lt=mid+1;//카운팅된 dvd의개수가 m보다 크다면 용량 범위를 더 늘려서 재탐색 (lt에 mid+1저장)
    }
    printf("%d\n", res);//최소용량 출력
    return 0;
 */

int Count(int size){
    int i, cnt=1, sum=0;
    for(i=1;i<=n;i++){
        if(sum+a[i]>size){
            cnt++;
            sum=a[i];
        }
        else sum=sum+a[i];
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    int m, i, lt=1, rt=0, mid, res, max=-2147000000;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
        rt=rt+a[i];
        if(a[i]>max) max=a[i];
    }
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(mid>=max && Count(mid)<=m){
            res=mid;
            rt=mid-1;
        }
        else lt=mid+1;
    }
    printf("%d\n",res);
}
