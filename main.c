#include <stdio.h>
#include <time.h>

long int rand(void);

void srand(unsigned int seed);

int getRandomInt();

int main() {
    int length = 0;
    printf("Enter the length of your password: ");
    scanf("%d", &length);
    char password[length];

    for (int i = 0; i < length; i++) {
        password[i] = getRandomInt();
    }
}

int getRandomInt() {
    srand(((unsigned int)time(NULL)));
    const int max = 122;
    const int min = 92;
    int random = (rand() % (max - min + 1)) + min;
    return random;
}

