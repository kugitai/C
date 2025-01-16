#include <stdio.h>
#include <string.h>
#define TRUE 1
#define BUFF_SIZE 1024

int add(int a,int b){     //足し算の関数
    int c = a + b;
    return c;}

int sub(int a,int b){     //引き算の関数
    int c = a - b;
    return c;}

int mul(int a,int b){     //掛け算の関数
    int c = a * b;
    return c;}

int div(float a,float b){     //割り算の関数
    float c = a / b;
    return c;}

int main(void){
    int foo; //終了するか否かの判定のための仮の変数
    char buff[BUFF_SIZE]; //入力を受け取るための変数
    int n1,n2;
    int sw;
    while(TRUE){
        printf("1つ目の数:");
        fgets(buff,BUFF_SIZE,stdin);
        sscanf(buff,"%d",&n1);
        printf("2つ目の数:");
        fgets(buff,BUFF_SIZE,stdin);
        sscanf(buff,"%d",&n2);
        puts("どの計算をしますか?");
        printf("足し算:1 引き算:2 掛け算:3 割り算:4  "); 
        scanf("%d",&sw);
        switch (sw)
        {
            case 1 : printf("計算結果は%dです\n",add(n1,n2)); break;
            case 2 : printf("計算結果は%dです\n",sub(n1,n2)); break; 
            case 3 : printf("計算結果は%dです\n",mul(n1,n2)); break;
            case 4 : printf("計算結果は%dです\n",div((float)n1,(float)n2)); break;
            default: puts("エラーです"); break;
        }
        puts("終了しますか？");
        puts("0:終了 1:続ける");
        scanf("%d",&foo);
        if(foo == 0){
            break;
        }
    }
    puts("終了します");
    return 0;
}

