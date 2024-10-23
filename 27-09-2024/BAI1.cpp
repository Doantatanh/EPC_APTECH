#include<stdio.h>
using namespace std;
int main(){
    int so_dien, tien_dien;
    do{
    printf("Hay nhap so dien tieu thu (Kwh, so nguyen duong): ");
    scanf("%d", &so_dien);
    }while (so_dien <= 0);
    //tính ti?n di?n
    if(so_dien <= 50){
       tien_dien  = so_dien * 1500;
    }
    else{
        tien_dien = 50 * 1500 + (so_dien - 50 )* 2000;
    }
    printf ("tong so tien dien phai tra la: %d dong\n", tien_dien);
    
    return 0;
}
