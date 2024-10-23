#include <stdio.h>

int main() {
    int N, i, isPrime = 1;

    // Nhập số N từ bàn phím
    printf("Nhập số nguyên dương N: ");
    scanf("%d", &N);

    // Kiểm tra nếu N <= 1 thì không phải là số nguyên tố
    if (N <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Kiểm tra tính nguyên tố bằng cách thử chia từ 2 đến căn bậc 2 của N
    for (i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // In ra kết quả
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
