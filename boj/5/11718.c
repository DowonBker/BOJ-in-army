#include <stdio.h>

int main(){
    char str[101];
    while(fgets(str, sizeof(str), stdin)!=NULL){
        printf("%s", str);
    }
    return 0;
}

// fgets는 str(포인터)값을 반환하거나 에러나 EOF에 도달하면 NULL을 반환한다