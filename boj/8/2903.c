#include <stdio.h>

int dot(int n){
    int s=2;
    for(int i=0;i<n;i++)
        s=2*s-1;
    return s*s;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", dot(n));
    
    return 0;
}