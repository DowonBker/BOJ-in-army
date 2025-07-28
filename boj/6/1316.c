#include <stdio.h>
#include <string.h>

void groupword(char word[], int *num){
    int len=strlen(word);
    int n=0;
    while(n<len){
        if(word[n]==word[n+1]){
            n++;
            continue;
        }
        else{
            for(int ii=n+2;ii<len;ii++){
                if(word[ii]==word[n]){
                    (*num)--;
                    return;
                }

            }
        }
        n++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(n>100)
        return 0;
    
    int num=n;
    char word[101];
    for(int i=0;i<n;i++){
        scanf("%s", word);
        groupword(word, &num);
    }
    printf("%d\n", num);
    return 0;
}