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
    if(n==1)
        return 0;
    int m=n;
    while(PrimeNum(m)!=1){
        for(int i=2;i<m;){
            if(m%i==0){
                printf("%d\n", i);
                m/=i;
                i=2;
                continue;
            }
            i++;
        }
    }
    printf("%d\n", m);
    return 0;

}