#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float weight;
    float height;
    float BMI;
    printf("輸入身高(公尺)及體重(公斤),計算BMI:\n");
    printf("身高：");
    scanf("%f" , &height);
    printf("體重：");
    scanf("%f", &weight);
    
    BMI = weight / (height*height) ;
    
    if (BMI > 24)
    {
        printf("該減肥了喔!!");
    }
    else if (BMI > 18.5)
    {
        printf("標準喔!!");
    }
    else if (BMI < 18.5)
    {
        printf("太輕喔!!");
    }
}


