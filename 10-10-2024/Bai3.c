#include <stdio.h>

int main() {
    char c;                // Biến để lưu ký tự nhập vào
    int is_in_word = 0;   // Biến để theo dõi trạng thái từ (1: đang ở trong từ, 0: không)
    int word_count = 0;   // Biến đếm số từ

    printf("Nhập chuỗi ký tự: ");

    while ((c = getchar()) != '\n') { // Nhập cho đến khi gặp ký tự newline
        if (c != ' ') {                // Nếu ký tự không phải là khoảng trắng
            if (!is_in_word) {         // Nếu hiện tại không ở trong từ
                is_in_word = 1;        // Đánh dấu đang ở trong từ
                word_count++;           // Tăng số từ lên
            }
        } else {
            is_in_word = 0;            // Nếu gặp khoảng trắng, đánh dấu không còn trong từ
        }
    }

    printf("Số từ trong chuỗi: %d\n", word_count); // In ra số từ đã đếm

    return 0;
}
