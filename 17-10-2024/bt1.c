#include <stdio.h>

void tinhtongvasole(int *number1, int *number2, int *sum, int *odd_count)
{
    *sum = 0;
    *odd_count = 0;
   for (int i = *number1; i < *number2; i++)
// Sửa điều kiện vòng lặp
    {
        *sum += i;
        if (i % 2 != 0)
        {
            (*odd_count)++;
        }
    }
}


int main(int argc, char const *argv[])
{
    int number1, number2 = 0;
    int sum, odd_count = 0;
    do
    {
        printf("Enter the first number: ");
        scanf("%d", &number1);

        printf("Enter the second number: ");
        scanf("%d", &number2);

        if (number1 >= number2)
        {
            printf("Số thứ nhất phải nhỏ hơn số thứ hai. Vui lòng nhập lại\n");
        }

    } while (number1 >= number2);
     // Gọi hàm để tính toán sử dụng con trỏ
    tinhtongvasole(&number1, &number2, &sum, &odd_count);
    //Hiện thị kết quả
    printf("Tổng các số giữa %d và %d là: %d\n", number1, number2, sum);
    printf("Tổng số lượng các số lẻ giữa %d và %d là: %d\n", number1, number2, odd_count);
    return 0;
}
