#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n != 42) printf("%d\n", n);
        else break;
    }
}