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
    int n, m;
    scanf("%d %d", &m, &n);

    int sum=0;
    int min=-1;
    for(int i=m;i<=n;i++){
        int k=PrimeNum(i);
        if(k==1){
            if(min<0)
                min=i;
            sum+=i;
        }
    }
    if(sum==0){
        printf("-1\n");
        return 0;
    }
    printf("%d\n", sum);
    printf("%d\n", min);
    return 0;
}