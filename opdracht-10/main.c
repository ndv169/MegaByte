#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char *shortForm;
    char *meaning;
} Acronym;

Acronym acronyms[] = {
    {"tbh", "to be honest"},
    {"brb", "be right back"},
    {"lol", "laughing out loud"},
    {"idk", "I don't know"},
    {"irl", "in real life"},
    {"afk", "away from keyboard"},
    {"cya", "see you"},
    {"fyi", "for your information"},
    {"omg", "oh my god"}
};

int main() {
    printf("beschikbare acroniemen");
    for (int i = 0; i < 9; i++) {
        printf("%s\n", acronyms[i].shortForm);
    }

    char input[690];
    printf("typ 1 van de beschikbare acroniemen in:\n");
    scanf("%69s", input);

    for (int i = 0; i < 11; i++) {
        if (strcmp(input, acronyms[i].shortForm) == 0) {
            printf("%s\n", acronyms[i].meaning);
            return 0;
        }
    }
}
