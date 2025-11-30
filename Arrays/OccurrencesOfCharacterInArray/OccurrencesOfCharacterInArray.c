#include <stdio.h>

int main() {
    char array[] = {'a','b','c','a','d','a','e','f','a'};
    char target = 'a';
    int count = 0;
    int lengthOfArray = sizeof(array) / sizeof(array[0]);
    printf("--Program to find the number ocuurrences of a character in array--\n");

    for (int i = 0; i < lengthOfArray; i++) {
        if (array[i] == target) {
            count++;
        }
    }

    printf("Character '%c' occurs %d times in the array.\n", target, count);

    return 0;
}
