#include <stdio.h>

void PerfectNum(int n){
    int k=0;
    int j=0;
    int perfect[1000]={0};
    for(int i=1;i<n;i++){
        if(n%i==0){
            perfect[k]=i;
            j+=i;
            k++;
        }
    }
    if(j!=n){
        printf("%d is NOT perfect.\n", n);
        return;
    }
    int a=0;
    printf("%d = %d", n, perfect[a]);
    for(a=1;a<k;a++){
        printf(" + %d", perfect[a]);
    }
    printf("\n");
}

int main(){
    int n=0;
    while(1){
        scanf("%d", &n);
        if(n==-1)
            break;
        PerfectNum(n);
    }
    return 0;
}