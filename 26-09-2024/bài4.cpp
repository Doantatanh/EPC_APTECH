#include<stdio.h>
int main(){
    float c, f;
    printf("Hay nhap nhiet do (°C) : ");
    scanf("%f", &c);
    //tính dien tích
    f =  (c * 9/5) + 32;
    printf("Nhiet do tinh bang do F:  %.2f\n", f);
    return 0;
}

