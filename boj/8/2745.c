#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[31];
    int n;
    scanf("%s %d", num, &n);

    printf("%ld\n", (int)strtol(num, NULL, n));

    return 0;
}