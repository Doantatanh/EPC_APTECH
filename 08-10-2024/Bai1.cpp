#include<iostream>
using namespace std;
int sumarray(int* arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum; 
}

    int main()
    {
        int size;
        cout<<"Nhập kích thước mảng: ";
        cin>>size;
        int* arr = new int[size];
       // Nhập các phần tử của mảng
    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < size; i++) {
        cout << "Phần tử " << i + 1 << ": ";
        cin >> arr[i];
    }
           int total = sumarray(arr, size);
    cout << "Tổng các phần tử trong mảng là: " << total << endl;
        delete[] arr;
        return 0;
    }