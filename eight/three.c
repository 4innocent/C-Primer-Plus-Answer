#include <ctype.h>
#include <stdio.h>

int main() {
    int ch;
    int upperLet = 0;
    int lowerLet = 0;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upperLet++;
        } else if (islower(ch)) {
            lowerLet++;
        }
    }
    printf("大写字母有%d个, 小写字母有%d个。", upperLet, lowerLet);
    return 0;
}