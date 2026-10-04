# include <stdio.h>

int main(void) {
    char name[50];
    printf("What's your name: ");
    scanf("%49s", name);
    printf("Hello %s, nice to meet you :)", name);

    return 0;
}
// gcc main.c -o main.exe 
// gcc -Wall -Wextra -Wpedantic -std=c17 main.c -o program