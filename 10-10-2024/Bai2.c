#include<stdio.h>

// Hàm hoán đổi giá trị của hai biến nguyên
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//hàm sắp xếp
void sort(int *arr, int n){
    for ( int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n- i - 1 ; j++)
        {
             if (*(arr + j) > *(arr + j + 1))
             {
                swap(arr + j, arr + j + 1);
                
             }
             
        }
        
    }
    
}

int main(){
    int arr[5];
    int n = 5;
    printf("Nhap 5 so nguyen: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    // Gọi hàm sắp xếp mảng
    sort(arr, n);

     printf("Mang sau khi sap xep tang dan: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
     printf("\n");
    return 0;
}