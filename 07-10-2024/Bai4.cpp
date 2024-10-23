#include<iostream>
using namespace std;

void stringcopy(char* destination, const char* source){
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main(){
    const int SIZE = 100;
    char source[SIZE];
    char detination[SIZE];

    cout<<"Nhập chuỗi nguồn: ";
    cin.getline(source, SIZE);
    stringcopy(detination, source);
    cout<<"Chuỗi đã sao chép: "<<detination<<endl;
    return 0;
}