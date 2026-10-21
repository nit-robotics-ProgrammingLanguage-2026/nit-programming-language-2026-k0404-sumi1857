#include <stdio.h>

int main(void) {
    int i;/* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    double ans; 

    scanf("%d",&i);

    ans=1.0/(i+100);

    printf("%.15f",ans);
    
    return 0;
}
