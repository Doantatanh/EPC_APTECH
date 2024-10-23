#include<stdio.h>
#include<iostream>
int main(){
    int N;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("Số phần tử phải lớn hơn 0.\n");
        return 1;
        }
    int arr[N];
    for ( int i = 0; i < N; i++)
    {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);

    }
    int max_value = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
        
    }
    printf("Giá trị lớn nhất trong mảng là: %d", max_value);
    return 0;
}