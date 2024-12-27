#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char s1[] = "Hello World";
    printf("%d\n", lengthOfLastWord(s1));  // Output: 5

    char s2[] = "   fly me   to   the moon  ";
    printf("%d\n", lengthOfLastWord(s2));  // Output: 4

    char s3[] = "luffy is still joyboy";
    printf("%d\n", lengthOfLastWord(s3));  // Output: 6

    return 0;
}
