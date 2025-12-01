#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    printf("--Program to reverse a string--\n");
    printf("Enter your string to be reversed:");
    scanf("%19s", str);  
    int stringLength = strlen(str);
   
    printf("String length: %d\n",stringLength);
    char reverseString[20];
    for (int i = 0; i < stringLength; i++) {
        reverseString[i] = str[stringLength - 1 - i];
    } 
    printf("Reverse name: %s\n",reverseString);
  return 0;
}
