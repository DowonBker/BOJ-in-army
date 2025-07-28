#include <stdio.h>
#include <string.h>

int main(){
    char word[101];
    scanf("%s", word);

    int len=strlen(word);
    int num=len;
    int n=0;
    while(n<len){
        if(word[n]=='c'){
            if(word[n+1]=='='){
                num-=1;
                n+=2;
                continue;
            }
            else if(word[n+1]=='-'){
                num-=1;
                n+=2;
                continue;
            }
        }
        if(word[n]=='d'){
            if(word[n+1]=='z'){
                if((n+2)<len){
                    if(word[n+2]=='='){
                        num-=2;
                        n+=3;
                        continue;
                    }
                } 
            }
            else if(word[n+1]=='-'){
                num-=1;
                n+=2;
                continue;
            }
        }
        if(word[n]=='l'){
            if(word[n+1]=='j'){
                num-=1;
                n+=2;
                continue;
            }
        }
        if(word[n]=='n'){
            if(word[n+1]=='j'){
                num-=1;
                n+=2;
                continue;
            }
        }
        if(word[n]=='s'){
            if(word[n+1]=='='){
                num-=1;
                n+=2;
                continue;
            }
        }
        if(word[n]=='z'){
            if(word[n+1]=='='){
                num-=1;
                n+=2;
                continue;
            }
        }
        n++;
    }
    printf("%d\n", num);
    return 0;
}