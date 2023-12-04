#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    int ans = rand() % 31;
    int num;
    int max_try = 5;
    int remain = max_try;
    do {
        printf("30までの数値を入力してください：");
        scanf("%d", &num);
        if (num < ans){
            printf("誤りです。もっと大きい数値です\n");
        } else if (num > ans){
            printf("誤りです。もっと小さい数値です\n");
        } 
        remain --;
    } while (ans != num && remain > 0);
    if (ans == num){
        printf("正解です！\n");
    } else {
        printf("回数制限を超えました\n");
    }
    return 0;
}