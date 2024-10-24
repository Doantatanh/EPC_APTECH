#include <stdio.h>     // Thư viện cho các hàm nhập xuất cơ bản
#include <stdbool.h>   // Thư viện cho kiểu dữ liệu boolean (true, false)

int main() {
    char str[100];    // Khai báo mảng ký tự để lưu chuỗi nhập vào (tối đa 99 ký tự + 1 ký tự kết thúc)
    int count = 0;    // Biến đếm số từ trong chuỗi, khởi tạo bằng 0
    bool inword = false; // Biến kiểm tra xem hiện tại có đang ở trong một từ không

    printf("Nhập vào một chuỗi: "); // Yêu cầu người dùng nhập một chuỗi
    fgets(str, sizeof(str), stdin);  // Đọc chuỗi từ bàn phím, lưu vào mảng str

    // Vòng lặp để duyệt từng ký tự trong chuỗi cho đến khi gặp ký tự kết thúc
    for (int i = 0; str[i] != '\0'; i++) {
        // Kiểm tra nếu ký tự hiện tại không phải là khoảng trắng hoặc ký tự xuống dòng
        if (str[i] != ' ' && str[i] != '\n') {
            // Nếu không đang ở trong một từ, có nghĩa là chúng ta vừa tìm thấy một từ mới
            if (!inword) {
                count++;           // Tăng số đếm từ lên 1
                inword = true;     // Đánh dấu là đang ở trong một từ
            }
        } else {
            // Nếu gặp khoảng trắng hoặc ký tự xuống dòng, đặt lại biến inword
            inword = false;        // Đánh dấu là không còn ở trong một từ nữa
        }
    }

    // In ra số lượng từ đã đếm được
    printf("Số từ trong chuỗi là: %d\n", count);
    return 0; // Kết thúc chương trình
}
