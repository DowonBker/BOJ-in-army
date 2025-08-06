#include <stdio.h>

int main(){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int i=(v-b)/(a-b);
    if((v-b)%(a-b)!=0)
        i++;
    printf("%d\n", i);

    return 0;
}

/*
1   2      3   4
v-a v-2a+b
v-b+(b-a)*i <= 0
v-b <= (a-b)*i
(v-b)/(a-b) <= i 인 i찾기
*/