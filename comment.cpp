#include <stdio.h>
#include <string.h>

int main() {
    char com[30];
    int i;

    printf("Enter comment: ");
    gets(com);

    if (com[0] == '/') {
        if (com[1] == '/') {
            printf("It is a comment");
        } else if (com[1] == '*' && strstr(com, "*/")) {
            printf("It is a comment");
        } else {
            printf("It is not a comment");
        }
    } else {
        printf("It is not a comment");
    }

    return 0;
}
