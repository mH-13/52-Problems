#include <stdio.h>
#include <string.h>
int main(){
    int T, i;
    char N[105];
    scanf("%d", &T);
    for(i=1; i<=T;i++){
        scanf("%s", N);
        int l = strlen(N);
        int num = N[l-1] - '0';
        if(num%2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
