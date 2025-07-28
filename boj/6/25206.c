#include <stdio.h>

double gradetocredit(char grade[]){
    if(grade[0]=='A'){
        if(grade[1]=='+')
            return 4.5;
        else
            return 4.0;
    }
    else if(grade[0]=='B'){
        if(grade[1]=='+')
            return 3.5;
        else
            return 3.0;
    }
    else if(grade[0]=='C'){
        if(grade[1]=='+')
            return 2.5;
        else
            return 2.0;
    }
    else if(grade[0]=='D'){
        if(grade[1]=='+')
            return 1.5;
        else
            return 1.0;
    }
    else
        return 0.0;
}

int main(){
    char subject[51];
    char grade[3];
    double credit;
    double creditall=0;
    double creditsubject=0;
    
    for(int i=0;i<20;i++){
        scanf("%s %lf %s", subject, &credit, grade);
        if(grade[0]=='P')
            continue;
        creditall+=credit;
        creditsubject+=(credit*gradetocredit(grade));
    }
    printf("%.6lf\n", creditsubject/creditall);
    return 0;
}