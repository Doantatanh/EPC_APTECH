#include <stdio.h>

int main() {
    float km, tiencuoc;

    do {
        printf("Nhap so km da di ");
        scanf("%f", &km);

        if (km <= 0) {
            printf("So km khong hop le vui long nhap lai\n");
        }

    } while (km <= 0);

    if (km <= 1) {
        tiencuoc = 14000;
    } else if (km <= 5) {
        tiencuoc = 14000 + (km - 1) * 10000;
    } else {
        tiencuoc = 14000 + 4 * 10000 + (km - 5) * 8500;
    }

    printf("So tien phai tra %.2f dong\n", tiencuoc);

    return 0;
}

