#include <stdio.h>
#include <string.h>

int dial(char w);

int main(){
    char word[16];
    scanf("%s", word);
    int len=strlen(word);

    int sec=0;
    for(int i=0;i<len;i++){
        sec+=dial(word[i]);
    }

    printf("%d\n", sec);
    return 0;
}

int dial(char w){
    int a=w;
    if(65<=a && a<=67)
        return 3;
    else if(68<=a && a<=70)
        return 4;
    else if(71<=a && a<=73)
        return 5;
    else if(74<=a && a<=76)
        return 6;
    else if(77<=a && a<=79)
        return 7;
    else if(80<=a && a<=83)
        return 8;
    else if(84<=a && a<=86)
        return 9;
    else
        return 10; 
}