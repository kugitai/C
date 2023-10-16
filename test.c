#include<stdio.h>

int main(){
    char a[1000];
    char p[1000];
    fgets(a,sizeof(a),p);
    sscanf(a,"%s",p);
    printf("%s\n",p);
}
