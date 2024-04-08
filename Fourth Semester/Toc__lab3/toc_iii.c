#include <stdio.h>
#include <string.h>

int main() {
    int table[3][2] = {{1, 0}, {1, 2}, {1, 2}};
    int i, l, status = 0;

    char input[100];

    printf("To implement DFA of language (ab+ba*)*\nEnter Input String: ");
    scanf("%s", input);

    l = strlen(input);

    for (i = 0; i < l; i++) {
        if (input[i] != 'a' && input[i] != 'b') {
            printf("The entered value is wrong.\n");
            return 0;
        }

        if (input[i] == 'a') {
            status = table[status][0];
        } else {
            status = table[status][1];
        }
    }

    if (status == 1 || status == 0) {
        printf("String Accepted\n");
    } else {
        printf("String not Accepted\n");
    }

    return 0;
}

