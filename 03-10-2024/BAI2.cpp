#include<stdio.h>
int main(){
  char chuoi[100];
  int dem = 0;
  int i = 0;
  printf("Nhap vao chuoi ky tu: ");
  fgets(chuoi, sizeof(chuoi), stdin);// su dung fgets d? doc chuoi
  while (chuoi[i] != '\0')   // Duy?t d?n khi g?p ký t? k?t thúc chu?i
  {
     if (chuoi[i] =='a' || chuoi[i] =='e' || chuoi[i] =='i' || chuoi[i] =='o' || 
	 chuoi[i] =='u' ||chuoi[i] =='A' || chuoi[i] =='E' || chuoi[i] =='I' || 
	 chuoi[i] =='O' || chuoi[i] =='U'){
     dem ++;// Tang bi?n d?m n?u tìm th?y nguyên âm
   }
  i ++;
  }
  printf("So luong nguyen am trong chuoi la: %d", dem);
  return 0;
}
