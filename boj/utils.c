//정수 n을 넣었을 때 소수면 1을 반환하고 
//그렇지않으면 0을 반환하는 함수
int PrimeNum(int n){
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}