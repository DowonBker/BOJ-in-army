#include <stdio.h>

void getchange(int cent){
    int change[4]={0};
    if(cent>=25){
        change[0]=cent/25;
        cent%=25;
    }
    if(cent>=10){
        change[1]=cent/10;
        cent%=10;
    }
    if(cent>=5){
        change[2]=cent/5;
        cent%=5;
    }
    change[3]=cent;

    printf("%d %d %d %d", change[0], change[1], change[2], change[3]);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);

    int cent;
    for(int i=0;i<t;i++){
        scanf("%d", &cent);
        getchange(cent);
    }
    return 0;
}