#include<stdio.h>
int main()
{
    char str[100];
    char *ptr;

    //nhập chuỗi từ bàn phím
    printf("Nhập một chuỗi kí tự: ");
    fgets(str, sizeof(str), stdin);

// Gán con trỏ trỏ đến đầu của chuỗi
    ptr = str;

    // Dùng con trỏ để duyệt qua từng ký tự và in ra bằng putchar
    printf("Chuỗi đã nhập là: ");
    while (*ptr != '\0') {  // Duyệt chuỗi cho đến khi gặp ký tự kết thúc '\0'
        putchar(*ptr);      // In ký tự hiện tại
        ptr++;              // Chuyển con trỏ sang ký tự tiếp theo
    }
    
    return 0;
}
