
#include <algorithm>//exit(0) 프로그램 종료 사용
#include <stdio.h>
//'A' ~ 'Z' : 65 ~90
//'a' ~ 'z' : 97 ~ 122

//배열a와 b의 1~26(-64한 값)까지 대문자, 27~52(-70한 값)까지 소문자를 넣고 해당하는 알파벳 카운팅
//그리고 나서 for문을 돌면서 인덱스값이 일치한지 확인
int a[60], b[60];

int main(int argc, const char * argv[]) {
    char str[100];
    int i;
    
    scanf("%s", str); //첫번째 단어가 str에 들어옴
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)//대문자
            a[str[i]-64]++;//카운팅
        else//소문자
            a[str[i]-70]++;//카운팅
    }
    scanf("%s", str); //두번째 단어가 str에 들어옴
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)//대문자
            b[str[i]-64]++;//카운팅
        else//소문자
            b[str[i]-70]++;//카운팅
    }
    for(i=1; i<=52; i++)
    {
        if(a[i]!=b[i])
        {
            printf("NO\n");
            exit(0); //프로그램종료
        }
    }
    printf("YES\n");
    return 0;
    
}

