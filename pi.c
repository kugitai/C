#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int inpoint = 0;//打った点のうち円の中に入ったもの
    int allpoint;//全ての点
    int i;//カウンター
    double x;//点の座標
    double y;//上と同じ
    double pi;
    srand(time(NULL));

    printf("何個の点をおきますか？(入力したらエンターを押してください)\n");

    scanf("%d",&allpoint);
    for(i = 0;i < allpoint;i++){
        x = (float)rand()/RAND_MAX;
        y = (float)rand()/RAND_MAX;
        if(x*x+y*y <= 1.0){
            inpoint++;
        }
        pi = inpoint*4/(double)allpoint;}
    printf("%f",pi);
    return 0;
}
