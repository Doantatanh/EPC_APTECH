#include <stdio.h>
#include <math.h>

void bai01()
{
    printf("0121001, Nguyen Van An\n");
    int n = 0;
    int sum_q = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    // Tính tổng các số chẵn q (0 < q <= n)
    for (int q = 2; q <= n; q += 2)
    {
        sum_q += q;
    }
    printf("Sum(q) = %d\n", sum_q);

    // Hiển thị tất cả các số k (0 < k < n) có 2 chữ số
    printf("List k: ");
    for (int k = 10; k < n; k++)
    {
        if (k >= 10 && k < 100)
        {
            if (k / 10 /* Hang chuc */ == k % 10 /* Hang don vi */) 
            {
                printf("%d, ", k);
            }
        }
    }

    int m;
    while (1)
    {
        printf(" Nhap m: ");
        int ketqua = scanf("%d", &m);
        if (ketqua != 1 && scanf("%d", &m) != 1 || getchar() != '\n')
        {
            printf("Khong hop le\n");
            while (getchar() != '\n');     // Xóa bộ nhớ đệm
            continue; // Quay lại đầu vòng lặp
        }

        // Kiểm tra điều kiện 0 < m < n
        if (m < 0 || m > n)
        {
            printf("Out of range!\n");
        }
        else
        {
            break;
        }
    }

    // Liệt kê tất cả các ước chung của m và n
    printf("Liet ke uoc chung = ");
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("%d, ", i);
        }
    }
}

int main(int argc, char const *argv[])
{
    bai01();
    return 0;
}
