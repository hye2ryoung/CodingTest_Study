//
//  main.cpp
//  P7
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[101], b[101];
    int i, p=0;//position p
    //gets : 한 줄을 통째로 읽어들인다. scanf %s는 공백이 있으면 그 전까지만 읽어들임
    gets(a);
    for (i=0; a[i]!='\0'; i++)
    {
        //공백이 아닐때
        if(a[i]!=' ')
        {
            //대문자일때
            if(a[i]>=65 && a[i]<=90)
            {
                //소문자 = 대문자 + 32 (A~Z : 65 ~ 90, a~z = 97 ~ 122)
                //p++ : p지점에 놓고 그 다음 p증가
                b[p++]=a[i]+32;
            }
            else //소문자일때
            {
                b[p++]=a[i];
            }
        }
    }
    b[p] = '\0'; //p가 문자열이끝난 그 다음위치에 있으므로 '\0'을 넣어준다(null문자)
    printf("%s\n", b); //공백이 아닌 소문자만 출력
    
    return 0;
}
