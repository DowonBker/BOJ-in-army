#include <stdio.h>

int main(){
    char word[5][16]={0};

    for(int i=0;i<5;i++){
        scanf("%s", word[i]);
    }
    int i=0, ii=0;
    for(ii=0;ii<16;ii++){
        for(i=0;i<5;i++){
            if(word[i][ii]=='\0')
                continue;
            printf("%c", word[i][ii]);
        }
    }
    printf("\n");

    return 0;
}