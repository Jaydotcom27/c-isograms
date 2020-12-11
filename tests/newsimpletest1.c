
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool IsIsogram(char *str);

void TestIsogram(){
    char arg[] = "ambidestro";
    bool result = IsIsogram(arg);
    
    if(result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram1 (newsimpletest1) message=Word isn't an isogram.\n", arg);
    }
}

void TestIsogram2(){
    char arg[] = "JeremY";
    bool result = IsIsogram(arg);
    
    if(result != 0){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram2 (newsimpletest1) message=Word is an isogram.\n", arg);
    }
}


int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest1\n");
    printf("%%SUITE_STARTED%%\n");
    
    printf("%%TEST_STARTED%% IsIsogram1 (newsimpletest1)\n");
    TestIsogram();
    printf("%%TEST_FINISHED%% time=0 testName (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram2 (newsimpletest1)\n");
    TestIsogram2();
    printf("%%TEST_FINISHED%% time=0 testName (newsimpletest1) \n");
      
    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}

