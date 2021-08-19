//
//  main.cpp
//  P52
//
//  Created by hyeryoung on 2021/08/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//Ugly Numbers : 소인수 분해 했을 때 소인수가 2, 3, 5로만 이루어진 수
int a[1501];
int main(int argc, const char * argv[]) {
    int n, i, p2, p3, p5, min=2147000000;
    scanf("%d", &n);
    a[1]=1;//Ugly Number의 첫번째로 1이 포함
    p2=p3=p5=1; //3포인터를 이용한 정렬
    for(i=2;i<=n;i++)
    {//세 포인터에 2,3,5를 각각 곱한 수들을 비교해서 최소값을 a배열에 채우고 해당 포인터를 ++ 해준다
        if(a[p2]*2 < a[p3]*3) min=a[p2]*2;
        else min=a[p3]*3;
        if(a[p5]*5 < min) min=a[p5]*5;
        
        //만약 최소값이 여러개 나왔을 경우 해당 포인터 모두를 ++해주지 않고 넘어간다면 그다음 순서에서 중복값이 a배열에 채워지게 되므로
        //최소값에 해당하는 포인터는 무조건 ++처리한다
        if(a[p2]*2==min) p2++;
        if(a[p3]*3==min) p3++;
        if(a[p5]*5==min) p5++;
        
        a[i]=min;//비교가 끝난 해당 최소값을 a배열의 i번째 순서에 채운다
    }
    printf("%d\n",a[n]);//n번째 Ugly Number를 출력
    return 0;
}
