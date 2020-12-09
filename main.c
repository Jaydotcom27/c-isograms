#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


bool IsIsogram(char *str){
    char newString[strlen(str)];
    for(int i = 0; i < strlen(str); i++){
        newString[i] = tolower(str[i]);
    }
    for(int j = 0; j < strlen(str); j++ ){
        for(int k = strlen(str); k > 0; k--){
            if(newString[j] == str[k] && j != k){
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char** argv) {
    if(IsIsogram("ambidextrously")){
        printf("es isograma");
    } else{
        printf("no es isograma");
    }
    return (EXIT_SUCCESS);
}

