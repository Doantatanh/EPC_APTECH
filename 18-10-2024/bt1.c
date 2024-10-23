#include <stdio.h>
#include <stdlib.h>

void bai1()
{
    int socannhap, i;
    printf("Nhập số lượng số Fibonacci cần tạo: ");
    scanf("%d", &socannhap);
    int output[100];
    for (i = 0; i < socannhap; i++)
    {
        if (i == 0 || i == 1)
        {
            output[i] = i;
            printf("%d ", i);
        }
        else
        {
            output[i] = output[i - 1] + output[i - 2];
            printf("%d ", output[i]);
        }
    }
}

int main(int argc, char *argv[])
{
    bai1();
    system("PAUSE");
    return 0;
}