#include <stdio.h>
#include <string.h>

char str[16] = "123";

int main() {
    printf("hello codex\n");
    strcpy(str, "12345678");
    printf("%s\n", str);
    return 0;
}
