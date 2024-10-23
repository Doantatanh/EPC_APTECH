#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int sodientieuthu;
    double tiendien;
    cout << "Hay nhap so dien da tieu thu (kWh): ";
    cin >> sodientieuthu;
    if(sodientieuthu <= 0){
        cout << "So dien khong hop le";
        return -1;
    }
    if(sodientieuthu <= 50){
        tiendien = sodientieuthu * 1678;
    }
    else if(sodientieuthu <= 100){
        tiendien = 50 * 1678 + (sodientieuthu - 50) * 1734;
    }
   else if (sodientieuthu <= 200) {
        tiendien = 50 * 1678 + 50 * 1734 + (sodientieuthu - 100) * 2014;
    } else if (sodientieuthu <= 300) {
        tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sodientieuthu - 200) * 2536;
    } else if (sodientieuthu <= 400) {
        tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sodientieuthu - 300) * 2834;
    } else {
        tiendien  = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (sodientieuthu - 400) * 2927;
    }
    cout << "So tien dien phai tra la: " << tiendien << " dong" << endl;

    return 0;
}
