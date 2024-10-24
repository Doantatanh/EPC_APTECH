#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Nhập chuỗi thứ nhất: ");
    scanf("%s", str1);

    printf("Nhập chuỗi thứ hai: ");
    scanf("%s", str2);

    if (strcmp(str1, str2 ) == 0){
        printf("Hai chuỗi giống nhau.\n");
    } 
    else {
        printf("Hai chuỗi khác nhau.\n");
    }
    return 0;

}