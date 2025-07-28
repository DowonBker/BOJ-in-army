#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000001];

    fgets(str,sizeof(str),stdin);

    int len=strlen(str);
    
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }

    int n=0;
    for(int i=1;i<len;i++)
        if(str[i]==' ')
            n++;
    if(str[len-1]==' ')
        n--;
    printf("%d\n", n+1);

    return 0;
}