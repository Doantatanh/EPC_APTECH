#include <stdio.h>  // Thư viện cho phép sử dụng các hàm nhập/xuất

int main() {
    char input_string[100];   // Mảng để lưu chuỗi nhập vào (tối đa 99 ký tự + 1 ký tự kết thúc)
    char result_string[100];  // Mảng để lưu chuỗi kết quả đã xóa khoảng trắng
    int j = 0;                // Biến để theo dõi chỉ số hiện tại trong result_string

    // Yêu cầu người dùng nhập chuỗi
    printf("Nhập một chuỗi: ");
    // Đọc chuỗi từ bàn phím (cho phép khoảng trắng)
    fgets(input_string, sizeof(input_string), stdin);  

    // Duyệt qua từng ký tự trong chuỗi nhập vào
    for (int i = 0; input_string[i] != '\0'; i++) {
        // Kiểm tra nếu ký tự không phải là khoảng trắng
        if (input_string[i] != ' ') {
            result_string[j] = input_string[i]; // Thêm ký tự vào result_string
            j++;  // Tăng chỉ số j để trỏ đến vị trí tiếp theo trong result_string
        }
    }

    // Thêm ký tự kết thúc chuỗi vào result_string
    result_string[j] = '\0';  

    // In ra chuỗi sau khi xóa khoảng trắng
    printf("Chuỗi sau khi xóa khoảng trắng: %s\n", result_string);

    return 0;  // Trả về 0 để chỉ ra rằng chương trình đã kết thúc thành công
}