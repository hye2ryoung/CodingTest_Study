//
//  main.cpp
//  P44
//
//  Created by hyeryoung on 2021/07/13.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
//이분검색 응용 : 결정 알고리즘
int n;//n : 마구간 수
int Count(int len, int xi[]){//len:좌표 간의거리와 비교할 지정값, xi배열:마구간 좌표를 가지는 배열
    int i, cnt=1, pos=xi[1];
    //말의 마리수 cnt에 저장. 초기값 1마리
    //현재좌표를 pos에 저장. 좌표1부터 시작
    for(i=2;i<=n;i++){
        if(xi[i]-pos >= len){//i번째 좌표와 현재좌표pos의 거리가 지정값 len보다 크거나 같을 경우
            cnt++;//말의 마리수를 하나 더 카운팅하고
            pos=xi[i];//i번째 좌표를 새로운 현재좌표pos로 지정
            
            //지정값이 정답이 되려면 [현재좌표]와 [나머지 더 큰 인덱스값 좌표들]사이의 거리가 지정값보다 무조건 크거나 같아야 해당 i번째 좌표에 말을 넣을 수 있으므로(최대값을 구하는거기때문에)
            //조건이 만족한 경우 말을 넣어주고 i번째 좌표를 새로운 pos로 지정해서 나머지 for문을 돈다
        }
    }
    return cnt;//조건을 만족할때마다 카운팅한 말의 마리수 cnt를 return
}

int main(int argc, const char * argv[]) {
    int c, i, lt=1, rt, mid, res;
    scanf("%d %d",&n, &c);//c : 말의 마리 수
    int *xi = new int[n+1];//좌표를 배열에 동적으로 할당해준다
    for(i=1;i<=n;i++){
        scanf("%d", &xi[i]);//1부터n까지의 좌표값을 입력
    }
    sort(xi+1, xi+n+1);//배열은 인덱스0부터 시작하므로 +1을 해주어 [1부터 n까지의 좌표를 정렬]해준다
    //Count함수에서 뺄셈을 이용해 거리를 구할것이므로 좌표값을 정렬해준다
    rt=xi[n];//배열의 끝값을 rt로 지정(거리값의 범위는 최소1에서부터~최대끝좌표값 사이일테니 rt값을 끝좌표값으로 지정, lt는 처음에1로초기화)
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(Count(mid, xi)>=c){//[카운팅된 말의 마리 수]가 [선언한 말의 마리 수 c]보다 작지 않은(크거나 같은) 선에서 최대 mid(거리)를 정한다
            res=mid;
            lt=mid+1;//카운팅된 말의 마리 수가 c보다 크거나 같다면 더 큰 거리가 답이 될 수 있는지 확인하기 위해 mid+1을 lt에 넣고 재탐색
        }
        else rt=mid-1;//카운팅된 말의 마리 수가 모자라다면 (지정값보다 더 큰 거리는 당연히 안되므로)더 작은 거리가 답인지 확인하기 위해 mid-1을 rt에 넣고 재탐색
    }
    printf("%d\n", res);//가장 가까운 두 말의 최대 거리(마구간에 c마리의 말이 최대로 배치될 수 있는 거리) 출력
    //ex) 정렬된 5개의 마구간 좌표값 1 2 4 8 9 에서, 3마리의 말을 배치할 때 거리최대값(답)은 3이다
    //말은 1,4,8자리에 배치된다
    
    delete[] xi;//할당된 배열의 메모리 해제
    //동적으로 할당된 변수를 모두 사용하면 메모리를 해제하여 재사용할 수 있도록 C++에 명시적으로 알려야 한다.
    //delete 연산자는 실제로 아무것도 삭제하지 않는다. 단순히 가리키는 메모리를 다시 운영 체제로 반환한다. 그러면 운영 체제에서 해당 메모리를 다른 응용 프로그램에 다시 할당할 수 있다.
    
    return 0;
}
