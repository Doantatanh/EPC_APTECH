#include <stdio.h>       // Thư viện cho các hàm nhập/xuất (input/output)
#include <stdlib.h>      // Thư viện cho các hàm quản lý bộ nhớ và chuyển đổi kiểu dữ liệu
#include <string.h>      // Thư viện cho các hàm xử lý chuỗi (string)

// Định nghĩa cấu trúc dữ liệu cho khóa học
typedef struct
{
    char authorName[50];   // Tên tác giả (tối đa 49 ký tự + 1 ký tự null để kết thúc chuỗi)
    char courseName[100];  // Tên khóa học (tối đa 99 ký tự + 1 ký tự null)
    int price;             // Giá của khóa học (kiểu số nguyên)
    char address[150];     // Địa chỉ tổ chức khóa học (tối đa 149 ký tự + 1 ký tự null)
    char description[200]; // Mô tả khóa học (tối đa 199 ký tự + 1 ký tự null)
    char startedDate[15];  // Ngày bắt đầu khóa học (dinh dạng yyyy-mm-dd, tối đa 14 ký tự + 1 ký tự null)
} course; // Tên của cấu trúc là 'course'

// Hàm nhập thông tin cho các khóa học
void inputCourses(course *courses, int n)
{
    // Vòng lặp để nhập thông tin cho n khóa học
    for (int i = 0; i < n; i++) // Lặp từ 0 đến n-1
    {
        // Nhập tên tác giả
        printf("Nhap ten tac gia: "); // In ra yêu cầu nhập tên tác giả
        fgets(courses[i].authorName, sizeof(courses[i].authorName), stdin); // Đọc chuỗi từ bàn phím
        courses[i].authorName[strcspn(courses[i].authorName, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

        // Nhập tên khóa học
        printf("Nhap ten khoa hoc: "); // In ra yêu cầu nhập tên khóa học
        fgets(courses[i].courseName, sizeof(courses[i].courseName), stdin); // Đọc chuỗi từ bàn phím
        courses[i].courseName[strcspn(courses[i].courseName, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

        // Nhập giá khóa học
        printf("Nhap gia khoa hoc: "); // In ra yêu cầu nhập giá khóa học
        if (scanf("%d", &courses[i].price) != 1) // Kiểm tra xem giá nhập có phải là số nguyên không
        {
            printf("Loi: vui long nhap so nguyen hop le cho gia khoa hoc.\n"); // Thông báo lỗi nếu không hợp lệ
            exit(1); // Kết thúc chương trình nếu giá không hợp lệ
        }
        getchar(); // Đọc ký tự xuống dòng còn lại sau khi nhập số

        // Nhập địa chỉ tổ chức khóa học
        printf("Nhap dia chi to chuc khoa hoc: "); // In ra yêu cầu nhập địa chỉ
        fgets(courses[i].address, sizeof(courses[i].address), stdin); // Đọc chuỗi từ bàn phím
        courses[i].address[strcspn(courses[i].address, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

        // Nhập mô tả khóa học
        printf("Nhap mo ta khoa hoc: "); // In ra yêu cầu nhập mô tả khóa học
        fgets(courses[i].description, sizeof(courses[i].description), stdin); // Đọc chuỗi từ bàn phím
        courses[i].description[strcspn(courses[i].description, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

        // Nhập ngày bắt đầu khóa học
        printf("Nhap ngay bat dau khoa hoc (yyyy-mm-dd): "); // In ra yêu cầu nhập ngày bắt đầu
        fgets(courses[i].startedDate, sizeof(courses[i].startedDate), stdin); // Đọc chuỗi từ bàn phím
        courses[i].startedDate[strcspn(courses[i].startedDate, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng
    }
}

// Hàm sắp xếp các khóa học theo tên tác giả
void sortCourses(course *courses, int n)
{
    // Vòng lặp sắp xếp bằng thuật toán bubble sort
    for (int i = 0; i < n - 1; i++) // Lặp từ 0 đến n-2
    {
        for (int j = i + 1; j < n; j++) // Lặp từ i+1 đến n-1
        {
            // So sánh tên tác giả của khóa học i và j
            if (strcmp(courses[i].authorName, courses[j].authorName) > 0) // Nếu tên tác giả i lớn hơn j
            {
                course temp; // Khai báo biến tạm để hoán đổi
                temp = courses[i]; // Lưu khóa học i vào temp
                courses[i] = courses[j]; // Đặt khóa học j vào vị trí i
                courses[j] = temp; // Đặt temp vào vị trí j
            }
        }
    }
}

// Hàm hiển thị thông tin các khóa học
void displayCourses(course *courses, int n)
{
    // Vòng lặp để hiển thị thông tin cho n khóa học
    for (int i = 0; i < n; i++) // Lặp từ 0 đến n-1
    {
        // In ra thông tin khóa học theo định dạng
        printf("%s (%s, %d, %s, %s, %s)\n", // In ra tên tác giả, tên khóa học, giá, địa chỉ, mô tả, ngày bắt đầu
               courses[i].authorName, courses[i].courseName, courses[i].price,
               courses[i].address, courses[i].description, courses[i].startedDate);
    }
}

// Hàm main
int main(int argc, char const *argv[])
{
    course *courses = NULL; // Con trỏ để lưu trữ danh sách khóa học (khởi tạo bằng NULL)
    int n = 0; // Biến lưu trữ số lượng khóa học (khởi tạo bằng 0)
    int choice; // Biến lưu trữ lựa chọn của người dùng
    do
    {
        // Hiển thị menu
        printf("=== Menu ===\n");
        printf("1. Nhap thong tin chi tiet cac khoa hoc\n"); // Lựa chọn nhập thông tin
        printf("2. Sap xep va hien thi thong tin chi tiet cac khoa hoc\n"); // Lựa chọn sắp xếp và hiển thị thông tin
        printf("3. Thoat chuong trinh\n"); // Lựa chọn thoát chương trình
        printf("Nhap lua chon: "); // Yêu cầu nhập lựa chọn

        // Kiểm tra xem lựa chọn có phải là số nguyên không
        if (scanf("%d", &choice) != 1) {
            printf("Loi: Vui long nhap so nguyen hop le.\n"); // Thông báo lỗi nếu không hợp lệ
            exit(1); // Kết thúc chương trình nếu không hợp lệ
        }

        // Xử lý lựa chọn của người dùng
        switch (choice) // Sử dụng switch để xử lý các lựa chọn
        {
        case 1: // Nếu lựa chọn là 1
            printf("Nhap so luong khoa hoc: "); // Yêu cầu nhập số lượng khóa học
            if (scanf("%d", &n) != 1 || n <= 0) // Kiểm tra số lượng khóa học hợp lệ
            {
                printf("Loi: vui long nhap so nguyen duong hop le.\n"); // Thông báo lỗi nếu không hợp lệ
                exit(1); // Kết thúc chương trình nếu không hợp lệ
            }
            getchar(); // Loại bỏ ký tự xuống dòng sau khi nhập số

            // Cấp phát bộ nhớ cho danh sách khóa học
            courses = (course *)malloc(n * sizeof(course)); // Cấp phát bộ nhớ cho n khóa học
            if (courses == NULL) // Kiểm tra xem cấp phát có thành công không
            {
                printf("Loi cap phat bo nho.\n"); // Thông báo lỗi nếu không thành công
                exit(1); // Kết thúc chương trình nếu không thành công
            }
            inputCourses(courses, n); // Gọi hàm nhập thông tin cho các khóa học
            break;

        case 2: // Nếu lựa chọn là 2
            // Kiểm tra xem đã nhập khóa học hay chưa
            if (courses == NULL) // Nếu danh sách khóa học là NULL
            {
                printf("Khong co du lieu de hien thi. Vui long nhap khoa hoc truoc.\n"); // Thông báo lỗi
            }
            else // Nếu có khóa học
            {
                sortCourses(courses, n); // Gọi hàm sắp xếp các khóa học
                displayCourses(courses, n); // Gọi hàm hiển thị thông tin các khóa học
            }
            break;

        case 3: // Nếu lựa chọn là 3
            printf("Goodbye\n"); // In ra thông báo tạm biệt
            break;

        default: // Nếu lựa chọn không hợp lệ
            printf("Lua chon khong hop le. Vui long chon lai.\n"); // Thông báo lỗi
            break;
        }
    } while (choice != 3); // Lặp lại cho đến khi người dùng chọn thoát

    free(courses); // Giải phóng bộ nhớ đã cấp phát cho danh sách khóa học
    return 0; // Kết thúc chương trình
}
