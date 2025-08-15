#include <stdio.h>

int main(){
    int a, b ,c;
    scanf("%d %d %d", &a ,&b, &c);

    int t;
    if(a>b){t=a; a=b; b=t;}
    if(b>c){t=b; b=c; c=t;}
    if(a>b){t=a; a=b; b=t;}

    if(a+b<=c)
        c=a+b-1;
    printf("%d\n", a+b+c);
    
    return 0;
}