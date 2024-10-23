#include<stdio.h>
int main(){
    float numbers[5];
     // Nhập 5 số thập phân
    printf("Nhập 5 số:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Số %d: ", i +1);
        scanf("%f", &numbers[i]);
    }

    printf("Danh sách đã đảo ngược của các số bạn đã nhập: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%.1f", numbers[i]);
        
        if (i > 0) {
            printf(", ");  // Thêm dấu phẩy giữa các số
        }
    }
    
    
}