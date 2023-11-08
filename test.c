#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    char p[1000];

    while(1){
    fgets(a,sizeof(a),stdin);
    sscanf(a,"%s",p);
    printf("あなたが入力したのは%sです\n",p);
    printf("終了しますか？(終了する際はYを押してください）\n");
    fgets(a,sizeof(a),stdin);
    sscanf(a,"%s",p);
    if(strcmp(p,"Y") == 0){
        break;
    }
    }
}
