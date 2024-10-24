#include <stdio.h>

int main() {
    int doan;

    do {
        // Hien thi menu
        printf("\nMoi ban lua chon mon an:\n");
        printf("1. Pho\n");
        printf("2. Bun cha\n");
        printf("3. Com tam\n");
        printf("4. Banh mi\n");
        printf("5. Thoat\n");
        printf("Moi ban lua chon thuc don (1-5): ");
        scanf("%d", &doan);

        // Xu ly lua chon
        switch (doan) {
            case 1:
                printf("Ban da chon: Pho\n");
                break;
            case 2:
                printf("Ban da chon: Bun cha\n");
                break;
            case 3:
                printf("Ban da chon: Com tam\n");
                break;
            case 4:
                printf("Ban da chon: Banh mi\n");
                break;
            case 5:
                printf("Thoat chuong trinh. Cam on ban da su dung!\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai!!!\n");
                break;
        }
    } while (doan != 5);

    return 0;
}

