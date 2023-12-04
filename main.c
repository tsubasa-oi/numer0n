#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // int randomnumber[10]={0,1,2,3,4,5,6,7,8,9};

    srand((unsigned)time(NULL));
    
    int firstNum = rand() % 10;
    int secondNum;
    int thirdNum;
    int forthNum;

    // 4桁の重複しない乱数を生成
    do {
        secondNum = rand() % 10;
    } while (firstNum == secondNum);

    do {
        thirdNum = rand() % 10;
    } while (firstNum == thirdNum | secondNum == thirdNum);

    do {
        forthNum = rand() % 10;
    } while (firstNum == forthNum | secondNum == forthNum | thirdNum == forthNum);

    // //確認用
     printf("%d,%d,%d,%d\n", firstNum,secondNum,thirdNum,forthNum);

    int arraySize = 4;
    int total;
    int inputNum;
    int inputArray[4];
    int hit;
    int brow;
    int count = 0;
    do{
        //入力
        printf("4桁の数値を入力してください：");
        scanf("%d", &inputNum);

        //それぞれの値を配列に格納
        inputArray[0] = inputNum / 1000;
        inputArray[1] = (inputNum % 1000) / 100;
        inputArray[2] = (inputNum % 100) / 10;
        inputArray[3] = inputNum % 10;

        //printf("%d%d%d%dです\n",inputArray[0],inputArray[1],inputArray[2],inputArray[3]);

        // hitとbrowの数を0に定義
        hit = 0;
        brow = 0;

        for (int i = 0 ; i < arraySize ; i++){
            if(inputArray[i] == firstNum){
                hit++;
                break;
            }
        }
        for (int i = 0 ; i < arraySize ; i++){
            if(inputArray[i] == secondNum){
                hit++;
                break;
            }
        }
        for (int i = 0 ; i < arraySize ; i++){
            if(inputArray[i] == thirdNum){
                hit++;
                break;
            }
        }
        for (int i = 0 ; i < arraySize ; i++){
            if(inputArray[i] == forthNum){
                hit++;
                break;
            }
        }

        brow = arraySize - hit;
        count++;
        // hit + brow = total;
        printf("hit:%d brow:%d\n", hit,brow);
    } while (hit < 4);

    printf("%d回目で正解です\n", count);
}