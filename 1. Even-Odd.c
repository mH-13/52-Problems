#include <stdio.h>
int main(){
    int T, N;
    scanf("%d", &T);
    for(int i=1; i<=T; i++){
        scanf("%d", &N);
        if(N%2 == 0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    
    return 0;
}
