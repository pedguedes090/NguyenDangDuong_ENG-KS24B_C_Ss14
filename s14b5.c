#include <stdio.h>
#include <string.h>

int main() {
    char word[100] = "Hello, World!";
    int length = strlen(word); 
    int count = 0; 
    for(int i = 0; i < length; i++) {
        if(word[i] == ' ') {
            count++;
        } 
    } 
    printf("Chuoi tren co %d tu\n", count + 1);
}

