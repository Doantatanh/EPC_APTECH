#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countA(char str[]){
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            count++;
        }
        
    }
    return count;

}

int main(){
    char str[100];
    printf("Nhập vào một chuỗi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int count = countA(str);
    printf("Số kí tự 'a' trong chuỗi: %d\n", count);
    return 0;
}