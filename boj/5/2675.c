#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    int l;
    char s[20];
    for(int i=0;i<t;i++){
        scanf("%d %s", &l, s);

        for(int ii=0;ii<strlen(s); ii++){
            for(int iii=0;iii<l;iii++)
                printf("%c", s[ii]);
            
        }
        printf("\n");
    }

    return 0;
}