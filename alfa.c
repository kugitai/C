#include <stdio.h>
#include <string.h>

int main(void){
    char baff[100];
    printf("何桁のパスワードですか？\n");
    fgets(baff,sizeof(baff),stdin);
    while(strcmp(baff,"0") == 0){
    printf("%s",baff);
    }
    return 0;
}