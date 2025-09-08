#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);   // input character
    printf("%c\n", ch);

    char s[100];
    scanf("%s", s);     // input string
    printf("%s\n", s);

    char sen[100];
    scanf("\n");        // clear newline
    scanf("%[^\n]%*c", sen); // input line / sentence
    printf("%s\n", sen);

    return 0;
}
