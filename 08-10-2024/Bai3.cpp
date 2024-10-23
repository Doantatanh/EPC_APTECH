#include<iostream>
using namespace std;
void printString(char* str){
    while (*str != '\0')
    {
        cout << *str;
        str++;
    }
        cout<<endl;
}
int main(){
    char str[100];
    cout<<"Nhập một chuỗi: ";
    cin.getline(str, 100);
    printString(str);
    return 0;
}