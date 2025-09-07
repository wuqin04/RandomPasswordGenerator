#include <stdio.h>
#include <time.h>

int main() {
    int length = 0;
    printf("Enter the length of your password: ");
    scanf("%d", &length);
    
    srand(time(NULL));

    int randomize = (rand() % 122) + 97;
    char password = randomize;
    printf("Your password is: %c", password);
}