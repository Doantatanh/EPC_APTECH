#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void bai01(){
    FILE *file;
    char *buffer;
    long file_size;
    int i;

    // Mở file ở chế độ đọc
    file = fopen("data.txt", "r");
    // Di chuyển con trỏ file đến cuối file
    fseek(file, 0, SEEK_END);
    // Lấy kích thước file
    file_size = ftell(file);
    // Quay lại đầu file
    rewind(file);

    // Cấp phát bộ nhớ cho buffer đủ chứa nội dung file
    buffer = (char *)malloc(sizeof(char) * (file_size + 1)); // +1 để thêm ký tự '\0'
    if (buffer == NULL) {
        printf("Không đủ bộ nhớ.\n");
        fclose(file);
        return 1;
    }
    // Data is in buffer
    // Đọc nội dung file vào buffer
    fread(buffer, sizeof(char), file_size, file);
    buffer[file_size] = '\0'; // Thêm ký tự kết thúc chuỗi
    // Đóng file và giải phóng bộ nhớ
    int numberOfWords = 0;
    int numberOflines = 0;
    int numberOfCharacters = 0;
    for ( i = 0; i <= strlen (buffer); i++)
    {
        if (buffer[i] == 32)
        {
           numberOfWords += 1;
        }
        else if (buffer[i] == '\n' || buffer[i] == '\0')
        {
           numberOflines += 1;
           numberOfWords += 1;
        }
        else{
            numberOfCharacters += 1;
        }
        
    }
    printf("numberOfWords = %d, numberOfLines = %d, numberOfCharacters = %d", 
    numberOfWords, numberOflines, numberOfCharacters);
    fclose(file);
    free(buffer);
}

void bai02(){
    char inputString[200];
    char searchString[100];
    int n = 0;
    int i, j;
    printf("Enter inputString : ");scanf(" %[^\n]", inputString); 
	printf("Enter SearchString : ");scanf(" %[^\n]", searchString); 
    for ( i = 0; i < strlen(inputString); i = i + 1) //strlen:  để tính độ dài của một chuỗi ký tự. Độ dài này không bao gồm ký tự null '\0'
    {
        if (inputString[i] == searchString[0])
        {
            for ( j = 0; j < strlen(searchString) ; j++)
            {
                if (searchString[j] != inputString[i + j])
                {
                    break;
                }
                if (j == strlen(searchString) - 1)
                {
                    n++; // hoặc n = n + 1 đều như nhau
                }
                
            }
            
        }
        
    }
    printf("%s appears %d times in %s\n", searchString, n, inputString);
    
}

int main(){
    bai02();
    //bai01();
}