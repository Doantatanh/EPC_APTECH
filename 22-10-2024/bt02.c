#include <stdio.h>
#include <math.h>
#include <string.h>

void fun1(int n)
{
    if (n >= n && n <= 9)
    {
        switch (n)
        {
        case 0: printf("zezo\n"); break;

        case 1: printf("one\n"); break;

        case 2: printf("two\n"); break;

        case 3: printf("three\n"); break;

        case 4: printf("four\n"); break;

        case 5: printf("five\n"); break;

        case 6: printf("six\n"); break;

        case 7: printf("seven\n"); break;

        case 8: printf("eight\n"); break;

        case 9: printf("nine\n"); break;
        }
    }
}

// Hàm fun2 để in số từ 0 đến 99
void fun2(int n){
    if (n < 100)
    {
      if (n >= n && n <= 9){
        fun1(n);
      }
      else if (n >= 10 && n <= 19)
      {
         // Các số từ 10 đến 19 có tên đặc biệt
          switch (n) {
                case 10: printf("ten"); break;
                case 11: printf("eleven"); break;
                case 12: printf("twelve"); break;
                case 13: printf("thirteen"); break;
                case 14: printf("fourteen"); break;
                case 15: printf("fifteen"); break;
                case 16: printf("sixteen"); break;
                case 17: printf("seventeen"); break;
                case 18: printf("eighteen"); break;
                case 19: printf("nineteen"); break;
            }
      } else{

             // Các số từ 20 trở lên
            int tens = n / 10; // Hàng chục
            int ones = n % 10; // Hàng đơn vị

             switch (tens) {
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("forty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
            }

            if (ones != 0)
            {
                printf(" ");
            }
            fun1(ones); // Gọi fun1 để in hàng đơn vị
      }
    }
}

int main() {
    printf("Test fun1\n");
    printf("\nfun1(-1): "); fun1(-1);
    printf("\nfun1(10): "); fun1(10);
    printf("\nfun1(1): "); fun1(1);

    printf("\n\nTest fun2\n");
    printf("\nfun2(9): "); fun2(9);
    printf("\nfun2(10): "); fun2(10);
    printf("\nfun2(15): "); fun2(15);
    printf("\nfun2(25): "); fun2(25);

    return 0;
}

