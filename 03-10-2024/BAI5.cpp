#include<stdio.h>  // Thư viện cung cấp hàm nhập xuất

// Hàm sắp xếp mảng theo thứ tự tăng dần sử dụng thuật toán Bubble Sort
void sortArray(int arr[], int n) {
    // Vòng lặp ngoài chạy từ 0 đến n-1 (n-1 lần)
    for (int i = 0; i < n - 1; i++) {
        // Vòng lặp trong để so sánh và hoán đổi các phần tử
        for (int j = 0; j < n - i - 1; j++) {
            // So sánh phần tử hiện tại với phần tử kế tiếp
            if (arr[j] > arr[j + 1]) {
                // Nếu phần tử hiện tại lớn hơn phần tử kế tiếp, hoán đổi chúng
                int temp = arr[j];       // Lưu giá trị của arr[j] vào biến tạm
                arr[j] = arr[j + 1];     // Đưa giá trị arr[j + 1] vào vị trí arr[j]
                arr[j + 1] = temp;       // Đưa giá trị tạm vào vị trí arr[j + 1]
            }
        }
    }
}

int main() {
    int N;  // Khai báo biến để lưu số lượng phần tử của mảng
    printf("Nhập số phần tử của mảng: "); // Yêu cầu người dùng nhập số lượng phần tử
    scanf("%d", &N);  // Đọc số lượng phần tử từ bàn phím và lưu vào biến N

    // Kiểm tra số lượng phần tử, nếu không hợp lệ thì thông báo lỗi
    if (N <= 0) {
        printf("Số phần tử phải lớn hơn 0.\n"); // Thông báo lỗi
        return 1;  // Kết thúc chương trình với mã lỗi 1
    }

    int arr[N]; // Khai báo mảng có kích thước N

    // Nhập các phần tử của mảng từ bàn phím
    for (int i = 0; i < N; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1); // Yêu cầu nhập từng phần tử
        scanf("%d", &arr[i]); // Đọc giá trị và lưu vào arr[i]
    }

    // Gọi hàm sắp xếp để sắp xếp mảng theo thứ tự tăng dần
    sortArray(arr, N);

    // In ra mảng sau khi đã sắp xếp
    printf("Mảng sau khi sắp xếp theo thứ tự tăng dần: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]); // In từng phần tử của mảng
    }
    printf("\n"); // Xuống dòng sau khi in xong mảng

    return 0;  // Kết thúc chương trình với mã thành công 0
}
