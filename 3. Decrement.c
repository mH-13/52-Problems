#include <stdio.h>
int main(){
    for(int i=1000; i >=1; i = i-5){
        printf("%d  %d  %d  %d  %d\n", i, i-1,i-2,i-3,i-4);

    }
    return 0;
}

//Or

#include <stdio.h>
int main(){
    for(int i=1000; i>=1; i--){
        if(i%5==0){
            printf("\n");
        }
        printf("%d\t", i);

    }
    printf("\n");
    return 0;
}
