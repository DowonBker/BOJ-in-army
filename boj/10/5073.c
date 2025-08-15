#include <stdio.h>

void triangle(int a, int b, int c){
    if((a>b && a>c && a>=b+c) || (b>c && b>a && b>=a+c) || (c>a && c>b && c>=b+a)){
        printf("Invalid\n");
        return;
    }
    if(a==b && a==c)
        printf("Equilateral\n");
    else if(a==b || a==c || b==c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");
}

int main(){
    int a, b, c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0)
            break;
        triangle(a, b, c);
    }
    return 0;
}