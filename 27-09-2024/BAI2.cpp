#include <stdio.h>

int main() {
    int a, b, c, max = a;
    printf("Hay nhap so a: ");
    scanf("%d", &a);
    printf("Hay nhap so b: ");
    scanf("%d", &b);
    printf("Hay nhap so c: ");
    scanf("%d", &c);
    if(b > max) {
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("So lon nhat trong 3 so là: %d", max);
    
    return 0;
}
