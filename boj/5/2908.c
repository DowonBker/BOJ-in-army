#include <stdio.h>

int main(){
    char a[4], b[4];
    scanf("%s %s", a, b);

    char c[4];
    c[3]='\0';
    for(int i=0;i<3;i++)
        c[2-i]=a[0+i];
    for(int i=0;i<3;i++)
        a[i]=c[i];
    
    for(int i=0;i<3;i++)
        c[2-i]=b[0+i];
    for(int i=0;i<3;i++)
        b[i]=c[i];
    
    int a1=(a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0');
    int b1=(b[0]-'0')*100+(b[1]-'0')*10+(b[2]-'0');

    if(a1>b1)
        printf("%d\n", a1);
    else if(a1<b1)
        printf("%d\n", b1);

    return 0;
}