//
//  main.cpp
//  P49
//
//  Created by hyeryoung on 2021/08/06.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
//블록의 최댓값

//ex)
//    (1 2 3 4)
// (1)         3
// (2)         2
// (3)         1
// (4)         1
//     2 0 3 1

int a[11][11], b[11];
int main(int argc, const char * argv[]) {
    int n, i, j, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &b[i]); //정면정보 2 0 3 1 (이떄 열=i로 생각)
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            a[j][i]=b[i]; //열을 i로 뒀으므로 a[j][i]의 순서
            //열을 고정한상태에서 각각의 행에 2, 다음 행에 0, 다음 3, 다음 1을 n개씩 채운다.
            //2차원 배열을 채운 다음 오른쪽측면 정보와 비교해나간다.
        }
    }
    for(i=n; i>=1; i--)
        scanf("%d", &b[i]); //오른쪽 측면정보 1 1 2 3 을 이차원배열 인덱스순으로 훑어야 하므로 3 2 1 1 순으로 저장한다 (b배열의 정면정보는 사용이 완료되었으므로 b배열을 재사용)
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            //(행이 1, 2, 3, 4...순으로 고정되어있고 각각의 열 j와 b[i]를 비교하는 것이므로 a[i][j]
            if(a[i][j]>b[i]) a[i][j]=b[i]; //더 큰값을 쳐내고 그 자리에 (더 작은)b배열(오른쪽측면값)을 넣는다.
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            sum = sum + a[i][j];
        }
    }
    printf("%d\n", sum);
  
    return 0;
}


