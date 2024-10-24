#include<stdio.h>
int main(){
  int diem;
  printf("Hay nhap diem thi cua sinh vien (0 - 100): ");
  scanf("%d", &diem);
  if(diem < 0 || diem > 100){
    printf("Diem nhap khong hop le!!!\n");
  }
  else{
    if (diem >= 90)
    {
      printf("Diem chu A");
    }
    else if (diem >=80)
    {
      printf("Diem chu B");
    }
    else if (diem >=70)
    {
      printf("Diem chu C");
    }
        else if (diem >=60)
    {
      printf("Diem chu D");
    }
    else
    {
      printf("Diem chu F");
    }
  }
  return 0;
}
