#include<stdio.h>

int main(){
    char a[1000];
    char p[1000];
    fgets(a,sizeof(a),stdin);
    sscanf(a,"%s",p);
    printf("あなたが入力したのは%sです\n",p);
}
