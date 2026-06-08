// Write a C program that reads a text file and returns the frequency of occurence of its ASCII characters.

#include <stdio.h>

typedef struct {
    int freq[256];
} AsciiFreq;

int main() {
    
    char buff[256];
    FILE *file_pointer = fopen("text.txt", "r");

    AsciiFreq af = {0};

    int ch;

    while ((ch = fgetc(file_pointer)) != EOF) {
        af.freq[ch]++;
    }

    fclose(file_pointer);

    for (int i = 0; i < 256; i++) {
        if (af.freq[i] > 0) {
            printf("%c -> %d\n", i, af.freq[i]);
        }
    }
}