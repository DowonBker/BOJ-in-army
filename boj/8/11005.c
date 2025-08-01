#include <stdio.h>

int main(){
    int num, n;
    scanf("%d %d", &num, &n);

    char digit[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ans[31]={0};
    int i;
    for(i=0;num>0;i++){ //for문 내의 num범위
        ans[i]=digit[num%n];
        num/=n;
    }
    int ii;
    for(ii=i-1;ii>=0;ii--) //for문 내의 ii범위
        printf("%c", ans[ii]); 
    
    printf("\n");

    return 0;
}