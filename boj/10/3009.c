#include <stdio.h>

int main(){
    int a[2], b[2], c[2];
    scanf("%d %d", &a[0], &a[1]);
    scanf("%d %d", &b[0], &b[1]);
    scanf("%d %d", &c[0], &c[1]);

    for(int i=0;i<2;i++){
        if(a[i]-b[i]==0)
            printf("%d ", c[i]);
        else if(a[i]-c[i]==0)
            printf("%d ", b[i]);
        else
            printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}