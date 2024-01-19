#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int inpoint = 0;//打った点のうち円の中に入ったもの
    int allpoint;//全ての点
    int i;//カウンター
    float x;//打った点のX座標
    float y;//打った点のY座標
    float pi;
    srand(time(NULL));

    puts("何個の点をおきますか？(入力したらエンターを押してください)");

    scanf("%d",&allpoint);
    
    for(i = 0;i < allpoint;i++){
        x = (float)rand()/RAND_MAX;
        y = (float)rand()/RAND_MAX;
        if(x*x+y*y <= 1.0){
            inpoint++;
        }
        pi = inpoint*4/(float)allpoint;}
    printf("%f\n",pi);
    return 0;
}
