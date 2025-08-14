#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int k=0;
    int i;
    for(i=1; i<=a; i++){
        if(a%i==0)
            k++;
        if(k==b){
            printf("%d\n", i);
            return 0;
        }
    }
 
    printf("0\n");
    return 0;
    
}