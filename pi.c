#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;
    for (i = 0; i < 1000; i++) {
        printf("%d\n", rand()%100+1);
    }
    return 0;
}
