#include <stdio.h>
#include <math.h>

// Hàm tính tổng tất cả các số chẵn từ 0 đến n
int sum_even(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

// Hàm hiển thị tất cả các số có 2 chữ số nhỏ hơn n
void list_double_digits(int n) {
    for (int i = 10; i < n; i++) {
        if (i % 11 == 0) { // Chỉ số có 2 chữ số giống nhau
            printf("%d ", i);
        }
    }
}

// Hàm liệt kê các ước chung của m và n
void list_common_divisors(int m, int n) {
    int min = (m < n) ? m : n;
    printf("List common divisors = ");
    for (int i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    // Hiển thị số sinh viên và tên
    printf("0121001, Nguyen Van An\n\n");

    // Nhập n
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Tính tổng các số chẵn
    int sum_q = sum_even(n);
    printf("Sum(q) = %d\n\n", sum_q);

    // Liệt kê các số có 2 chữ số giống nhau nhỏ hơn n
    printf("List k: ");
    list_double_digits(n);
    printf("\n\n");

    // Nhập m và kiểm tra đầu vào
    int m;
    while (1) {
        printf("Enter m: ");
        if (scanf("%d", &m) != 1) {
            printf("Incorrect input!\n");
            while (getchar() != '\n'); // Xóa bộ nhớ đệm
            continue;
        }
        if (getchar() != '\n') { // Nếu còn ký tự thừa
            printf("Trailing character!\n");
            while (getchar() != '\n'); // Xóa bộ nhớ đệm
            continue;
        }
        if (m <= 0 || m >= n) {
            printf("Out of range!\n");
        } else {
            break;
        }
    }

    // Liệt kê các ước chung của m và n
    list_common_divisors(m, n);

    // Giả sử công thức tính T là sin(m) / log(n)
    double T = sin(m) / log(n);
    printf("T = %.6f\n", T);

    float resul = 0.0;
    for ( int i = 1; i <= n - m; i++)
    {
        resul += pow(-1, i) / (float)(i);
    }
    printf(" = %f \n", resul);

    return 0;
}
