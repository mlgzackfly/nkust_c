#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float weight;
    float height;
    float BMI;
    printf("��J����(����)���魫(����),�p��BMI:\n");
    printf("�����G");
    scanf("%f" , &height);
    printf("�魫�G");
    scanf("%f", &weight);
    
    BMI = weight / (height*height) ;
    
    if (BMI > 24)
    {
        printf("�Ӵ�ΤF��!!");
    }
    else if (BMI > 18.5)
    {
        printf("�зǳ�!!");
    }
    else if (BMI < 18.5)
    {
        printf("�ӻ���!!");
    }
}


