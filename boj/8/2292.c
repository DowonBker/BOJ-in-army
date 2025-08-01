#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n==1){
        printf("1\n");
        return 0;
    }
    n-=1;
    for(int i=1;;i++){
        n-=i*6;
        if(n<=0){
            printf("%d\n", 1+i);
            return 0;
        }
    }

    return 0;
}
