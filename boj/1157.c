#include <stdio.h>
#include <ctype.h>

int main(){
    char str[1000001];
    scanf("%s", str);

    int a[26]={0};

    for(int i=0;str[i]!='\0';i++){
        char c=toupper(str[i]);
        a[c-'A']++;
    }

    int max=-1;
    int ii=0;
    int idx=-1;
    for(int i=0;i<26;i++){
        if(a[i]>max){
            max=a[i];
            idx=i;
            ii=0;
        }
        else if(a[i]==max)
            ii++;
    }
    if(ii>0){
        printf("?\n");
        return 0;
    }

    printf("%c\n", idx+'A');

    return 0;
}
