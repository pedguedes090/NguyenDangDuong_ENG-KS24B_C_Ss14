#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    printf("Nhap xau ky tu bat ky: ");
    fgets(arr, sizeof(arr), stdin); 
    arr[strcspn(arr, "\n")] = 0;     
    printf("Xau ky tu vua nhap: %s", arr);
    printf("\nDo dai chuoi: %lu", strlen(arr)); 

}

