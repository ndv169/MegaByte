#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char input[690];
    printf("Woord:\n");
    scanf("%69s", input);

    if(isPalindrome(input)) {
        printf("dit woord is een palindroom!");
    } else {
        printf("dit is geen palindroom!!!!!");
    }

    return 0;
}
