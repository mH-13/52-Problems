//strtol() -- string to long converter 
//-- long int strtol (const char* str, char** endptr, int base);
//stdlib.h -- header file of strtol()
//atol -- Convert string to long integer (function )
//strtoul -- Convert string to unsigned long integer (function )
// strtod -- Convert string to double (function )


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        char line[1000000];
        scanf(" %[^\n]", line);
        char *p, *e;
        long input;
        int count =0;
        p = line;
        for(p=line; ; p=e){
            input = strtol(p, &e, 10);
            if(p == e){
                break;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
