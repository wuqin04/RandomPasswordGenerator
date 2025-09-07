#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char getRandomChar();

int main() {
    int len = 0;
    char* password = "empty";
    printf("Enter the length of your password: ");
    scanf("%d", &len);

    printf("Your random character is: %s\n", password);
}

char getRandomChar() {
    srand(((unsigned int)time(NULL)));
    const int max = 122;
    const int min = 92;
    long int random = (rand() % (max - min + 1)) + min;
    return (char)random;
}
