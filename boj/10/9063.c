#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    int min[2]={10000, 10000};
    int max[2]={-10000,-10000};
    for(int i=0;i<n;i++){
        scanf("%d %d", &x[i], &y[i]);
        if(x[i]<min[0])
            min[0]=x[i];
        if(y[i]<min[1])
            min[1]=y[i];
        if(x[i]>max[0])
            max[0]=x[i];
        if(y[i]>max[1])
            max[1]=y[i];
    }
    printf("%d\n", (max[0]-min[0])*(max[1]-min[1]));
    return 0;
}