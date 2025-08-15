#include <stdio.h>

int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int a=w-x;
    int b=h-y;
    int l[4]={x, y, a, b};
    int ans=x;
    for(int i=1;i<4;i++){
        if(l[i]<ans)
            ans=l[i];
    }
    printf("%d\n", ans);
    return 0;
}