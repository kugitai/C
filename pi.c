#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int inpoint = 0,allpoint;//打った点のうち円の中に入ったものと全ての点
    float x,y,pi; //打った点のx座標とy座標と結果
    srand(time(NULL));

    puts("何個の点をおきますか？(入力したらエンターを押してください)");

    scanf("%d",&allpoint);
    
    for(int i = 0;i < allpoint;i++){
        x = (float)rand()/RAND_MAX;
        y = (float)rand()/RAND_MAX;
        if(x*x+y*y <= 1.0){
            inpoint++;
        }
        pi = inpoint*4/(float)allpoint;}
    printf("%f\n",pi);
    return 0;
}
