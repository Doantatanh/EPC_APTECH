#include<iostream>
using namespace std;
int sumDivisibleByThree(int *arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 3 ==0)
        {
            sum += *(arr + i);
        }
        
    }
    return sum;
    
}

int main(){
    int size;
    cout<<"Nhập kích thước của mảng: ";
    cin>>size;
    int arr[size];
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = sumDivisibleByThree(arr, size);
    cout<<"Tổng các số chia hết cho 3 là: "<<sum<<endl;
    return 0;
    
}