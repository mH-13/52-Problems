#include <stdio.h>
int main(){
    int n,i,num;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &num);
        printf("Case %d:\t", i);//printf("Case %d:", i);
        for(int j=1;j<=num; j++){
            if(num%j==0){
                printf("%d ", j); //printf(" %d", j);
            }
        }
        printf("\n");

    }
    return 0;
}
