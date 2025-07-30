#include <stdio.h>

int main(){
    int paper[100][100]={0};
    int num;
    scanf("%d", &num);

    int a, b;
    for(int i=0;i<num;i++){
        scanf("%d %d", &a, &b);
        for(int n=a;n<a+10;n++){
            for(int m=b;m<b+10;m++){
                paper[n][m]=1;
            }
        }
    }

    int s=0;
    for(int n=0;n<100;n++){
        for(int m=0;m<100;m++){
            if(paper[n][m]==1)
                s++;
       }
    }
    printf("%d\n", s);

    return 0;
}