#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int ii=0;ii<m;ii++)
            scanf("%d", &a[i][ii]);
    }
    int b[n][m];

    for(int i=0;i<n;i++){
        for(int ii=0;ii<m;ii++)
            scanf("%d", &b[i][ii]);
    }
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int ii=0;ii<m;ii++)
            sum[i][ii]=a[i][ii]+b[i][ii];
    }
    
    for(int i=0;i<n;i++){
        for(int ii=0;ii<m;ii++){
            printf("%d ", sum[i][ii]);
        }
        printf("\n");
    }
    return 0;
}