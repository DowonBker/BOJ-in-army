#include <stdio.h>

void calc(int x){  
    int n=x;
    int i;
    for(i=1; ;i++){
        n-=i;
        if(n>0)   
            continue;
        n+=i-1;
        break;
    }
/*
    if(i%2==0)
        printf("%d / %d\n", 1+n,i-n);
    else
        printf("%d / %d\n", i-n,1+n);   답에 공백이 있어서 오답ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅅㅂ
*/
    if(i%2==0)
        printf("%d/%d\n", 1+n,i-n);
    else
        printf("%d/%d\n", i-n,1+n);
}

int main(){
    int x;
    scanf("%d", &x);

    calc(x);
    return 0;
}

/*
수학문제를 풀 땐 노트를 준비하자
1/1 0+1
1/2 1+1
1/3 1+2+1
1/4 1+2+3+1
1/5 1+2+3+4+1
1/6 1+2+3+4+5+1

    printf("x  %d\n", x);
    printf("n  %d\n", n);
    printf("i  %d\n", i);

x  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
n  0 0 1 0 1 2 0 1 2 3 0 1 2 3 4
i  1 2 2 3 3 3 4 4 4 4 5 5 5 5 5

   1 1 2 1 2 3 1 2 3 4
   1 2 1 3 2 1 4 3 2 1
*/