#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int cuicksort(int list[],int l,int r){
    int pivot = list[l];
    int i,j,tmp;

    

}

int main(){

    srand((unsigned int)time(NULL));

    int n;
    printf("配列の長さを入力: ");
    scanf("%d",&n);

    int o_list[n];

    for(int i = 0;i < n;i++){
        o_list[i] = rand() % 1000;
    }

    for(int i=0;i<n;i++){
        printf("%d ",o_list[i]);
    }

    printf("\n");

    cuicksort(o_list,0,n-1);

    return 0;
}