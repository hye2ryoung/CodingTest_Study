//
//  main.cpp
//  P62
//
//  Created by hyeryoung on 2021/10/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
//병합정렬(분할 정복)
int data[10], tmp[10];
void divide(int lt, int rt){
    int mid;
    int p1, p2, p3;
    if(lt<rt){
        mid = (lt+rt)/2;
        divide(lt,mid);//정렬할 범위를 분할한다 / lt부터 mid까지,
        divide(mid+1,rt);//mid+1부터 rt까지
        
        //p1,p2는 data배열을 가리키는 포인터
        p1=lt;
        p2=mid+1;
        //p3은 tmp배열을 가리키는 포인터
        p3=lt;
        while(p1<=mid && p2<=rt){//p1이 mid보다 작거나같고 p2가 rt보다 작거나 같을 동안
            if(data[p1]<data[p2]){//data p1이가리키는값 < p2가 가리키는값 이면
                tmp[p3++]=data[p1++];//data p1이 가리키는값을 tmp p3이가리키는값에 넣어주고난뒤 둘다 ++
            }
            else tmp[p3++]=data[p2++];//아니라면 p2가가리키는값을 tmp에 넣어주고 둘다++
        }
        //위의 while문에서 빠져나왔다면 두개의 조건 중 여전히 충족하는 조건에 따라 나머지 처리를 해준다
        while(p1<=mid) tmp[p3++]=data[p1++];
        while(p2<=rt) tmp[p3++]=data[p2++];
        //나머지 처리까지 정렬이 끝나면 tmp에 정렬된 값을 data에 복사해준다
        for(int i=lt; i<=rt; i++){
            data[i] = tmp[i];
        }
    }
}
int main(int argc, const char * argv[]) {
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &data[i]);
    }
    divide(1, n);//1부터n까지의 자연수범위를 병합정렬한다
    for(i=1; i<=n; i++){
        printf("%d ", data[i]);
    }
    return 0;
}
