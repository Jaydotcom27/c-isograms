#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool IsIsogram(char *str){
    char newString[strlen(str)];
    for(int i = 0; str[i]; i++){
        newString[i] = tolower(str[i]);
    }
    for(int i = 0; i < strlen(str); i++){
        for (int j = strlen(str); j > 0; j-- ){
            if (newString[i] == str[j] && i != j){
                return 0;
            }
        }
    }
    
    return 1;
}


int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

