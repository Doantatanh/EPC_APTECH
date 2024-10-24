#include <stdio.h> // Thư viện cung cấp các hàm nhập xuất

int main() {
    int N, i; // Khai báo biến N để lưu số lượng phần tử trong mảng, và i để lặp
    int tong = 0; // Khai báo biến để lưu tổng, khởi tạo bằng 0

    // Yêu cầu người dùng nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu trong mang (N): ");
    scanf("%d", &N); // Đọc số lượng phần tử từ bàn phím và lưu vào biến N

    // Khai báo mảng có kích thước N
    int mang[N]; // Tạo một mảng số nguyên có N phần tử

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < N; i++) { // Vòng lặp để nhập từng phần tử
        printf("Phan tu thu %d: ", i + 1); // In ra yêu cầu nhập phần tử thứ i
        scanf("%d", &mang[i]); // Đọc giá trị từ bàn phím và lưu vào arr[i]
    }

    // Tính tổng các phần tử trong mảng
    for (i = 0; i < N; i++) { // Vòng lặp để tính tổng
        tong += mang[i]; // Cộng giá trị của mỗi phần tử vào biến tong
    }

    // In ra tổng các phần tử trong mảng
    printf("Tong cac phan tu trong mang la: %d\n", tong); // In ra tổng

    return 0; // Kết thúc chương trình
}
