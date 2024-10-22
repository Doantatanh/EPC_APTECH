#include <stdio.h>

int main() {
    int a;

    // Nhap hai so nguyên
    printf("Nhap so nguyên : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Day la so chan");
    }
    else{
        printf("Day la so le");
    }
    return 0;
    }
