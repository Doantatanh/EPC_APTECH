#include <iostream> // Bao gồm thư viện iostream để sử dụng cin và cout
using namespace std; // Sử dụng không gian tên std để tránh phải viết std:: trước mỗi lệnh

int main() {
    int n; // Khai báo biến n để lưu kích thước của mảng
    int* arr; // Khai báo con trỏ arr để lưu địa chỉ của mảng động

    cout << "Nhập kích thước của mảng: "; // Xuất thông báo yêu cầu nhập kích thước mảng
    cin >> n; // Nhận kích thước mảng từ người dùng

    // Cấp phát bộ nhớ động cho mảng arr với kích thước n
    arr = new int[n];

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (arr == nullptr) { // Nếu arr trỏ đến nullptr, tức là không đủ bộ nhớ
        cout << "Không thể cấp phát bộ nhớ" << endl; // Xuất thông báo lỗi
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // Nhập các giá trị cho mảng
    for (int i = 0; i < n; i++) { // Vòng lặp để nhập từng phần tử vào mảng
        cout << "Nhập giá trị của phần tử arr[" << i << "]: "; // Xuất thông báo để người dùng nhập giá trị
        cin >> arr[i]; // Nhận giá trị cho phần tử thứ i
    }

    // Xuất giá trị của mảng
    cout << "Giá trị trong mảng:" << endl; // Xuất thông báo trước khi in giá trị mảng
    for (int i = 0; i < n; i++) { // Vòng lặp để in ra từng phần tử của mảng
        cout << "arr[" << i << "]=" << arr[i] << endl; // In ra giá trị của phần tử thứ i
    }

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng động
    return 0; // Kết thúc chương trình và trả về 0
}
