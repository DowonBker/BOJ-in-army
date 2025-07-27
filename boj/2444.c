#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n==1){
        printf("*\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n-i-1;ii++)
            printf(" ");
        for(int iii=0;iii<(2*i+1);iii++)
            printf("*");
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int ii=0;ii<i;ii++)
            printf(" ");
        for(int iii=0;iii<(2*n-1-2*i);iii++)
            printf("*");
        printf("\n");
    }

    return 0;
}