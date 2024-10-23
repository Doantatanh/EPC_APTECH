#include<stdio.h>
int main(){
    int a,b, sum;
    printf("Hay nhap so a: ");
    scanf("%d", &a);
    printf("Hay nhap so b: ");
    scanf("%d", &b);

    //tính tong
    sum = a+b;
    //in ket qua
    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    return 0;
}
