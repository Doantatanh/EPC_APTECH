#include<iostream>
using namespace std;
void reversearry(int* arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }   
}

int main(){
    int size;
    cout<<"Nhập kích thước mảng: ";
    cin>> size;

    int* arr = new int[size];
    cout<<"Nhập các phần tử của mảng:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Phần tử "<< i + 1 <<": ";
        cin>>arr[i];
    }
    reversearry(arr, size);
    cout<<"Mảng sau khi đảo ngược là: ";
    for (int i = 0; i < size; i++)
    {
       cout<< arr[i]<<" ";
    }
    cout << endl;
    delete[] arr;
    return 0;
    
    
}