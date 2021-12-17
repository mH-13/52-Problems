#include <stdio.h>
int main(){
    for(int i=1000; i >=1; i = i-5){
        printf("%d  ", i);
        printf("%d  ", i-1);
        printf("%d  ", i-2);
        printf("%d  ", i-3);
        printf("%d  \n", i-4);

    }
    return 0;
}
