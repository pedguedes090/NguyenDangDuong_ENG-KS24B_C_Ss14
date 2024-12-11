#include <stdio.h>

int main() {
    char str[100];
    int letterCount = 0;    
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin); // Doc chuoi tu ban phim
    str[strcspn(str, "\n")] = 0; // Loai bo ky tu newline neu co
    for (int i = 0; str[i] != '\0'; i++) {
        // Kiem tra neu ky tu khong phai la so (0-9)
        if ((str[i] >= '0' && str[i] <= '9')) {            
        }else{
        	letterCount++;
		}
    }    
    printf("So ky tu khong phai la so trong chuoi: %d\n", letterCount);
}

