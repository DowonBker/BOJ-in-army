#include <stdio.h>

int main(){
    int arr[9][9];
    int max=-1;
    int n, m;

    int i, j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]>max){
            max=arr[i][j];
            n=i;
            m=j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", n+1, m+1);

    return 0;
}