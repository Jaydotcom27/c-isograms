
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool IsIsogram(char *str);

void TestIsogram(){
    char arg[] = "ambidestro";
    bool result = IsIsogram(arg);
    
    if (result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram (newsimpletest1) message=Is not isogram.\n", arg);
    }
}

void TestIsogram2(){
    char arg[] = "juegos";
    bool result = IsIsogram(arg);
    
    if (result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram2 (newsimpletest1) message=Is not isogram.\n", arg);
    }
}



int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest1\n");
    printf("%%SUITE_STARTED%%\n");
    
    printf("%%TEST_STARTED%% IsIsogram (newsimpletest1)\n");
    TestIsogram();
    printf("%%TEST_FINISHED%% time=0 func (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram2 (newsimpletest1)\n");
    TestIsogram2();
    printf("%%TEST_FINISHED%% time=0 func (newsimpletest1) \n");
    
    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}

