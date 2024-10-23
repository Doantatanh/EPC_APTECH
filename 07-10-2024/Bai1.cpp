#include <iostream>  // Bao gồm thư viện iostream để sử dụng cin và cout
using namespace std; // Sử dụng không gian tên std để tránh phải viết std:: trước mỗi lệnh

int main() {
    int n; // Khai báo biến n để lưu số lượng phần tử của mảng
    cout << "Nhập số lượng phần tử của mảng: "; // Xuất thông báo yêu cầu nhập số lượng phần tử
    cin >> n; // Nhận số lượng phần tử từ người dùng

    // Cấp phát bộ nhớ động cho mảng arr với kích thước n
    int* arr = new int[n];

    cout << "Nhập các phần tử của mảng: " << endl; // Xuất thông báo yêu cầu nhập các phần tử
    for (int i = 0; i < n; i++) { // Vòng lặp để nhập từng phần tử vào mảng
        cout << "Phần tử " << i + 1 << ": "; // Xuất thông báo để người dùng nhập phần tử thứ i+1
        cin >> arr[i]; // Nhận giá trị cho phần tử thứ i
    }

    double sum = 0; // Khai báo biến sum để lưu tổng các phần tử, khởi tạo bằng 0
    for (int i = 0; i < n; i++) { // Vòng lặp để tính tổng các phần tử
        sum += arr[i]; // Cộng dồn giá trị của phần tử thứ i vào biến sum
    }

    double average = sum / n; // Tính giá trị trung bình bằng cách chia tổng cho số lượng phần tử

    int count = 0; // Khai báo biến count để đếm số lượng phần tử lớn hơn giá trị trung bình
    for (int* ptr = arr; ptr < arr + n; ptr++) { // Vòng lặp sử dụng con trỏ để duyệt qua từng phần tử
        if (*ptr > average) { // Kiểm tra nếu phần tử hiện tại lớn hơn giá trị trung bình
            count++; // Nếu đúng, tăng biến count lên 1
        }
    }

    // Xuất kết quả
    cout << "Giá trị trung bình là: " << average << endl; // In ra giá trị trung bình
    cout << "Số lượng phần tử lớn hơn giá trị trung bình là: " << count << endl; // In ra số lượng phần tử lớn hơn giá trị trung bình

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng động
    return 0; // Kết thúc chương trình và trả về 0
}
