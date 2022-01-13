#include <stdio.h>
int main(){
    int n1,n2,n3;
    int T,num,small,large, mid;
    scanf("%d", &T);
    for(int i=1; i<= T; i++){
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1>n2 && n1>n3){
            large = n1;
            if(n2>n3){
                small = n3;
                mid = n2;
            }
            else{
                small = n2;
                mid = n3;
            }
        }
        if(n2>n1 && n2>n3){
            large = n2;
            if(n1>n3){
                small = n3;
                mid = n1;
            }
            else{
                small = n1;
                mid = n3;
            }
        }
        if(n3>n2 && n3>n1){
            large = n3;
            if(n1>n2){
                small = n2;
                mid = n1;
            }
            else{
                small = n1;
                mid = n2;
            }
        }
        printf("Case %d: %d %d %d\n", i, small, mid, large);

    }
    return 0;
}
