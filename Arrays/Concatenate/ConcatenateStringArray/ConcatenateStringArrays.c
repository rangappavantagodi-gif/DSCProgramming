#include <stdio.h>
#include <string.h>

int main() {
    char firstName[30];
    char lastName[30];
    char fullName[70];
    printf("--Concatenate  two string arrays--\n");
    printf("Enter first name:\n");
    scanf("%29s",&firstName);       //limit the input to avoid overflow
    printf("Enter last name:\n");
    scanf("%29s",&lastName);
    
    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);
    printf("Full Name: %s",fullName);
    return 0;
}
