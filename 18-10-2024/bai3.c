#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char name[20];     //: Tên sản phẩm
    char provider[20]; //: Nhà cung cấp
    int publishyear;   //: Năm phát hành của sản phẩm
    float price;       //: Giá của sản phẩm
} Product;

void DisplayProduct(Product *products, int numberOfProduct)
{
    int i;
    for (i = 0; i < numberOfProduct; i++)
    {
        Product *product = products + i;
        printf("Tên sản phẩm: %s\n", product->name);
        printf("Nhập nhà cung cấp: %s\n", product->provider);
        printf("Nhập năm phát hành của sản phẩm: %d\n", product->publishyear);
        printf("Nhập giá của sản phẩm: %.2f\n", product->price);
    }
}

void sort(Product *products, int numberOfProduct)
{
    int i, j;
    for (i = 0; i < numberOfProduct - 1; i++)
    {
        for (j = 0; j < numberOfProduct - i - 1; j++)
        {
            // So sánh giá sản phẩm để sắp xếp từ cao đến thấp
            if ((products + j)->price < (products + j + 1)->price)
            {
                // Hoán đổi hai sản phẩm
                Product temp = *(products + j);
                *(products + j) = *(products + j + 1);
                *(products + j + 1) = temp;
            }
        }
    }
}

void searchProduct(Product *products, int numberOfProduct)
{
    char provider[20]; // Khai báo biến để lưu tên nhà cung cấp
    float minPrice;    // Khai báo biến để lưu giá tối thiểu
    printf("Nhập tên nhà cung cấp: ");
    scanf(" %[^\n]", provider);
    printf("Nhập giá tối thiểu: ");
    scanf("%f", &minPrice);
    bool found = false;
    int count = 0;
    for (int i = 0; i < numberOfProduct; i++) {
         /*  Hàm strcmp sẽ trả về 0 nếu hai chuỗi (tên nhà cung cấp) bằng nhau.
          Điều này có nghĩa là sản phẩm đang được kiểm tra có nhà cung cấp khớp với nhà cung
           cấp mà người dùng đã nhập. */
        /* Điều kiện này kiểm tra xem giá sản phẩm có lớn hơn giá tối thiểu mà người dùng nhập hay không. */
        if (strcmp(products[i].provider, provider) == 0 && products[i].price > minPrice) {
            if (!found) {
                printf("Có các sản phẩm thỏa mãn:\n");
                found = true;
            }
            count++;
            printf("%d. Tên sản phẩm: %s - Nhà cung cấp: %s - Năm phát hành: %d - Giá: %.2f\n",
                   count, products[i].name, products[i].provider, products[i].publishyear, products[i].price);
        }
    }

    if (!found) {
        printf("Không tìm thấy sản phẩm nào phù hợp.\n");
    }
}

void menu()
{
    int choice = 0;
    int numberOfProduct = 0;
    Product *products = (Product *)malloc(100 * sizeof(Product));
    // Lấy năm hiện tại
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900; // Lấy năm hiện tại
    do
    {
        printf("Product management system\n");
        printf(" 1. Nhập sản phẩm   |  2. Hiển thị sản phẩm | 3. Tìm kiếm sản phẩm | 4. Thoát\n");
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);
        int i = 0;
        switch (choice)
        {
        case 1:
            do
            {
                printf("Nhập số lượng sản phẩm: ");
                scanf("%d", &numberOfProduct);
            } while (numberOfProduct < 0 || numberOfProduct > 100);
            for (i = 0; i < numberOfProduct; i++)
            {
                Product *product = products + i;
                printf("Nhập Tên sản phẩm: ");
                scanf(" %[^\n]", product->name);
                printf("Nhập nhà cung cấp: ");
                scanf(" %[^\n]", product->provider);
                do
                {
                    if (current_year - product->publishyear > 10 || current_year - product->publishyear < 0)
                    {
                        printf("Năm phát hành phải nhỏ hơn 10 và lớn hơn 0 so với năm hiện tại (%d).\n", current_year);
                    }
                    printf("Nhập năm phát hành của sản phẩm: ");
                    scanf("%d", &product->publishyear);
                } while (current_year - product->publishyear > 10 || current_year - product->publishyear < 0);
                do
                {
                    printf("Nhập giá của sản phẩm: ");
                    scanf("%f", &product->price);
                    if (product->price < 100 || product->price > 500)
                    {
                        printf("Giá sản phẩm phải nằm trong khoảng từ 100 đến 500.\n");
                    }

                } while (product->price < 100 || product->price > 500);
            }
            break;

        case 2:
            sort(products, numberOfProduct);
            DisplayProduct(products, numberOfProduct);
            break;

        case 3:
            searchProduct(products, numberOfProduct);
            break;

        case 4:
            printf("Goodbye\n");
            break;

        default:
            if (choice < 1 || choice > 4)
            {
                printf("Vui lòng chọn 1-4 để tiếp tục!\n");
            }
            break;
        }
    } while (choice != 4);
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
