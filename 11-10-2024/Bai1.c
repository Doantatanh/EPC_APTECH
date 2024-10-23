#include<stdio.h>
#include<string.h>

void bongbongsapxep(char arr[][100], int n){
    char temp[100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp (arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
            
        }
        
    }
    
}

int main(){
    int N;
    printf("Nhập số lượng chuỗi: ");
    scanf("%d", &N);
    char ten[N][100];
    for (int i = 0; i < N; i++)
    {
        printf("Nhập chuỗi thứ %d: ", i + 1);
        scanf("%s", ten[i]);
    }

    bongbongsapxep(ten, N);

    printf("Danh sách chuỗi sau khi sắp xếp:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", ten[i]);
    }
    

    
}