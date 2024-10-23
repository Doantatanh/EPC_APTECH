#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void bai2(char *input){
    char * a;
    for ( a = input; *a != '\0'; a++)
    {
    }
    strcpy(a, ".txt");
    printf(input);
}
int main()
{
    char name[100];
    printf("Input String: ");
    scanf(" %[^\n]", name);
    bai2(name);
}
