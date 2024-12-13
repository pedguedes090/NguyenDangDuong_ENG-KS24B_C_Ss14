#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "bcdac";
    int freq[256] = {0}; 
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        freq[str[i]]++;
    }
    printf("Ky tu va so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

