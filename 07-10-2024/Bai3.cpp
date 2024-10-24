#include<iostream>
using namespace std;
// Hàm tìm giá trị lớn nhất trong mảng
int findmax(int* arr, int size){
    int maxval = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxval)
        {
            maxval = arr[i];
        }
        
    }
    return maxval;
    
}

int main(){
    int n;
    cout<<"Nhập giá trị của mảng: ";
    cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhập giá trị của phần tử arr[" << i <<"]: ";
        cin>> arr[i];
    }
    //tìm giá trị lớn nhất trong mảng
    int maxvalue = findmax(arr, n);
    cout<<"Giá trị lớn nhất trong mảng là: "<< maxvalue << endl;
    delete[] arr;
    return 0;
}