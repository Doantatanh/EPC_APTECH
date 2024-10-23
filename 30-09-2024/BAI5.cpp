#include<stdio.h>
int main(){
    float dtb;
    printf("Hay nhap diem trung binh: ");
    scanf("%f", &dtb);
    if(dtb < 0 || dtb > 10){
        printf("Ði?m nh?p vào không h?p l?. Vui lòng nh?p di?m trong kho?ng t? 0 d?n 10.\n");
    }
    else {
        if(dtb >= 9.0){
        printf("Xuat sac", dtb);
    }
    else if(dtb >= 8.0){
        printf("Gioi", dtb);
    }
    else if(dtb >= 6.5){
        printf("Kha", dtb);
    }
    else if(dtb >= 5.0){
        printf("Trung binh", dtb);
        }
    else if(dtb >= 3.5){
        printf("Y?u", dtb);
        }
    else{
        printf("Kem", dtb);
    }
    }
    return 0;
}
