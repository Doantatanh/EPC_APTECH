#include<stdio.h>
int main(){
    int x, y;
    char pheptinh;
    printf("Hay nhap so nguyen 1: ");
    scanf("%d", &x);
    printf("Hay nhap so nguyen 2: ");
    scanf("%d", &y);
    getchar(); // X? l� k� t? newline c�n s�t sau khi nh?p s?
    //ngu?i d�ng ch?n ph�p t�nh
    printf("Hay chon phep tinh (+, -, *, /): ");
    scanf("%c", &pheptinh);
    // S? d?ng switch...case d? th?c hi?n ph�p t�nh
    switch(pheptinh){
        case '+': 
            printf("Ket qua: %d + %d = %d\n", x, y, x + y);
            break;
            case '-':
            printf("ket qua: %d - %d = %d\n", x, y, x - y);
            break;
            case '*':
            printf("Ket qua: %d * %d = %d\n", x, y, x * y);
            break;
            case '/':
            
            if(y != 0){
                printf("Ket qua: %d / %d = %.2f\n", x, y, (float ) x / y);
            }
            else
            {
                printf("Loi: khong the chia het cho 0 !!\n ");
            }
            break;
        default:
        printf("phep tinh khong hop le");
        break;
        return 0;
    }
    
}
