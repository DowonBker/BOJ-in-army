#include <stdio.h>

int PrimeNum(int n){
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a=0;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d", &num);
        if(PrimeNum(num)==1)
            a++;
    }
    printf("%d\n", a);
    return 0;
}