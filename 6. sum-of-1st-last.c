#include <stdio.h>
int main(){
    
    int i,T,N, sum;
    scanf("%d", &T);
    
    for(i=1; i<=T; i++){
        scanf("%d", &N);
        int lsd= N%10;
        int msd = N;
        while(N>9){
            N = N/10;
        }
        msd = N;
        int sum = lsd+ msd;
        printf("Sum = %d\n", sum);
    }
    return 0;
}
