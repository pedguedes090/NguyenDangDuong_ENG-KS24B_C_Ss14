#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!"; 
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
}

