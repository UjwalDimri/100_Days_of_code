// 📁
// Q123 (File Handling)
// 📋
// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
// Show Sample Test Cases
// Input 1:
// File: sample.txt (Content: Hello world\nThis is C programming)
// Output 1:
// Characters: 31
// Words: 5
// Lines: 2
// Explanation 1:
// The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }

    if (characters > 0 && lines == 0)
        lines = 1;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}
