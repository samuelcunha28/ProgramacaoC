#include <stdio.h>

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
