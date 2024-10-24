#include<stdio.h>
int main(){
    char ch;
    printf("Hay nhap mot ki tu: ");
    ch = getchar();
    //hi?n thi ch? dã nh?p
    printf("Ban da nhap ky tu: '%c'\n", ch);
    //di?u ki?n
    if(ch >= 65 && ch<= 90){
        printf("Ki tu '%c' la chu cai in hoa\n", ch);
    }
    else if(ch >= 97 && ch<= 122){
        printf("Ki tu '%c' la chu cai thuong\n", ch);
    }
    else if(ch>= 48 && ch<= 57){
        printf("Ki tu '%c' la chu so\n", ch );
    }
    else {
        printf("Ki tu 'c' la ki tu dac biet\n", ch);
    }
    return 0;
}
