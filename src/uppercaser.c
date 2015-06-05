
/*
 * Note: This approach works because of the way
 * ASCII lays out the character set - this will
 * work with most text, but be warned about UTF-8
 * or non ASCII characters..
 */


#include <stdio.h>

char c;

int main() {
    do {
        // Read a character from stdin
        c = fgetc(stdin);
        // End of file? Nothing left to read...
        if (feof(stdin)) {
            // Exit loop
            break;
        }

        if ((c >= 'a') && (c <= 'z')) {
            c += 13;
            c = c - 97;
            c = c % 26;
            c = c + 97;

        }

        if ((c >= 'A') && (c <= 'Z')) {
            c += 13;
            c = c - 65;
            c = c % 26;
            c = c + 65;
        }
        // Print the character to stdout (default)
        printf("%c", c);
    } while (1);
    // Exit cleanly
    return 0;

}

