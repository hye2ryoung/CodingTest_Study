//
//  main.cpp
//  P5
//
//  Created by hyeryoung on 2021/06/24.
//  Copyright © 2021 hyeryoung. All rights reserved.
//

//#include <iostream>
//cin cout

#include <stdio.h>
//scanf printf
int main(int argc, const char * argv[]) {
   
    char a[20];
    int year, age;
    scanf("%s", a);
    
    if(a[7]=='1' || a[7]=='2') year = 1900 + ((a[0] - 48)*10 + (a[1] - 48)); //askii번호 0 = 48
    else year = 2000 + ((a[0] - 48)*10 + (a[1] - 48));
    
    age = 2019 - year + 1;
    printf("%d ", age);
    
    if(a[7]=='1' || a[7]=='3') printf("M\n");
    else if(a[7]=='2' || a[7]=='4') printf("W\n");
    return 0;
}
