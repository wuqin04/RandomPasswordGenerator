#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char getRandomChar();

int main() {
    srand(((unsigned int)time(NULL)));

    int len;
    char term;
    char* password = NULL;

    printf("Enter the length of your password: ");
    if (scanf("%d%c", &len, &term) != 2 || term != '\n') {
        fputs("error: the input is not integer, exiting.\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (len < 0) {
        fputs("error: the length cannot be smaller than 0, exiting.\n", stderr);
        exit(EXIT_FAILURE);
    }

    // alloc max size for password
    password = malloc(sizeof(char)*len + 1);
    if (!password) {
        fputs("error: password allocation failed, exiting.\n", stderr);
        exit(EXIT_FAILURE);
    }
    password[len] = '\0';

    for (size_t i = 0; i < len; i++) {
        password[i] = getRandomChar();
    }

    printf("The generated password is: %s\n", password);

    free(password);
}

char getRandomChar() {
    const int max = 126;
    const int min = 33;
    int random = (rand() % (max - min + 1)) + min;
    return (char)random;
}
