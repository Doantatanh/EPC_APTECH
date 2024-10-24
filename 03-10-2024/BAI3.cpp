#include <stdio.h> // Thư viện cung cấp các hàm nhập xuất
#include <string.h> // Thư viện cho các hàm xử lý chuỗi như strlen

int main() {
    char chuoi[100]; // Khai báo mảng ký tự có kích thước tối đa là 100
    int i, len; // Khai báo biến i (dùng cho vòng lặp) và len (để lưu chiều dài của chuỗi)

    // Yêu cầu người dùng nhập vào chuỗi ký tự
    printf("Nhap vao chuoi ki tu: ");
    fgets(chuoi, sizeof(chuoi), stdin); // Sử dụng fgets để đọc chuỗi từ bàn phím

    len = strlen(chuoi); // Tính chiều dài của chuỗi bằng hàm strlen

    // Kiểm tra xem ký tự cuối cùng trong chuỗi có phải là ký tự newline ('\n') không
    if (chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0'; // Nếu có, thay thế ký tự newline bằng ký tự kết thúc chuỗi ('\0')
    }

    // In ra chuỗi theo thứ tự ngược lại
    printf("Chuoi theo thu tu nguoc lai la: ");
    for (i = len - 1; i >= 0; i--) { // Vòng lặp từ cuối chuỗi về đầu
        printf("%c", chuoi[i]); // In từng ký tự ra màn hình
    }
    printf("\n"); // In xuống dòng sau khi in xong chuỗi

    return 0; // Kết thúc chương trình
}
