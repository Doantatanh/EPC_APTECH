#include <stdio.h>

int main() {
    char str[100]; // Khai báo chuỗi với kích thước tối đa 100 ký tự
    char ch; // Khai báo ký tự cần đếm
    int count = 0; // Biến để đếm số lần xuất hiện

    // Nhập chuỗi từ bàn phím
    printf("Nhập vào một chuỗi: ");
    fgets(str, sizeof(str), stdin); // Sử dụng fgets để nhập chuỗi có khoảng trắng

    // Nhập ký tự cần đếm
    printf("Nhập vào ký tự cần đếm: ");
    scanf("%c", &ch);

    // Sử dụng vòng lặp để đếm số lần xuất hiện của ký tự
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++; // Tăng biến đếm nếu tìm thấy ký tự
        }
    }

    // In ra kết quả
    printf("Ký tự '%c' xuất hiện %d lần trong chuỗi.\n", ch, count);

    return 0;
}
