#include<iostream>
int main(){
    int N, Tong = 0;

    //Nhập số nguyên dương từ bàn phím
    printf("Nhập một số nguyên dương N: ");
    scanf("%d", &N);

    //Sử dụng vòng lặp for để tính các số chẵn từ 1 đến N
    for ( int i = 1; i < N; i++)
    {
        if (i % 2 ==0) // Kiểm tra xem i có phải là số chẵn không
        {
           Tong += i; // Nếu là số chẵn, cộng vào tổng
        }
        
    }
    //In ra kết quả
    printf("Tổng tất cả các số chẵn từ 1 đến %d là: %d\n", N, Tong);
    return 0;
}