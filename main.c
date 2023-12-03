#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ans = rand() % 10;
    int num;
    do {
        printf("1桁の数値を入力してください：");
        scanf("%d", &num);
        if (num < ans){
            printf("誤りです。もっと大きい数値です\n");
        } else if (num > ans){
            printf("誤りです。もっと小さい数値です\n");
        } 
    } while (ans != num);
    printf("正解です！\n");
    return 0;
}