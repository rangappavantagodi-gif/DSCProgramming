#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char mainString[50];
    char subString[50];
    printf("--Program to find sub string inside a string--\n");
    
    printf("Enter main string:\n");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0';  // remove newline
    
    printf("Enter the sub string to search:\n");
    fgets(subString, sizeof(subString), stdin);
    subString[strcspn(subString, "\n")] = '\0';  // remove newline
    
    int lengthOfMainString = strlen(mainString);
    int lengthOfSubString = strlen(subString);
    bool found= false;          // flag to check weather the string is found
    if(lengthOfSubString > lengthOfMainString){        //exception handling
        printf("Sub string length is more than main string\n"); 
    }else if(lengthOfSubString ==0){
        printf("Empty sub String\n");
    }
    else{
        int lengthDifference = lengthOfMainString -lengthOfSubString;
        for(int i=0; i<= lengthDifference;i++){   
            int j;
            for(j=0;j<lengthOfSubString;j++){
                if(mainString[i+j]!=subString[j]){  //if subString char not matches break and move to next char in mainString
                    break;   //breaks the inner loop if subString char not matched with mainString char
                }
            }
            if(j== lengthOfSubString){
                printf("Substring found at index: %d\n",i);
                found= true;    // set the flag true as subString found
                break;  //if substring found breaks the outer loop
            }
        }
    }
    if(!found){
        printf("Sub string not found\n");
    }
    return 0;
}
